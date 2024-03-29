#include "main.h"

/**
 * Reads a text file and writes its contents to the standard output.
 *
 * @filename: The name of the file to read.
 * @letters:  The number of bytes to read and write.
 *
 * Returns the number of bytes written, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
