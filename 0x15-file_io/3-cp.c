#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * Allocates memory for a buffer.
 *
 * @param file: The name of the file (used for error reporting).
 *
 * Returns a pointer to the allocated buffer on success.
 * Exits with error code 99 and an error message to STDERR on memory allocation failure.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * Closes a file descriptor.
 *
 * @param fd: The file descriptor to close.
 *
 * Exits with error code 100 and an error message to STDERR on failure to close the file.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * Copies the contents of one file to another.
 *
 * @param argc: The number of command-line arguments.
 * @param argv: An array of command-line arguments.
 *
 * This program copies the contents of a source file (argv[1])
 * to a destination file (argv[2]).
 * If the destination file doesn't exist, it will be created.
 * If it exists, its contents will be overwritten.
 * The program reads and writes data in chunks of 1024 bytes.
 *
 * Usage: cp file_from file_to
 *
 * Returns 0 on success, exits with error codes on failure:
 *   - 97 for incorrect usage
 *   - 98 for reading errors from the source file
 *   - 99 for writing errors to the destination file
 *   - 100 for errors when closing files
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
