#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header_info - Print information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:   %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:    %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:  %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:    ");
    switch (header->e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL:  printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN:  printf("DYN (Shared object file)\n"); break;
        default:      printf("Other\n"); break;
    }
    printf("  Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 98;
    }

    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "Error: Unable to read ELF header\n");
        close(fd);
        return 98;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&header);
    close(fd);
    return 0;
}
