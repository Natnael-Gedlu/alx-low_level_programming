#include "main.h"

/**
 * Creates a new file or truncates an existing one and writes content to it.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file (can be NULL to create an empty file).
 *
 * Returns 1 on success, -1 on error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
