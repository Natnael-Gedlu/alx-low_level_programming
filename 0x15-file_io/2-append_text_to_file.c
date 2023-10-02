#include "main.h"

/**
 * Appends text to an existing file or creates a new file if it doesn't exist.
 *
 * @filename: The name of the file to append to or create.
 * @text_content: The text to append to the file (can be NULL to create an empty file).
 *
 * Returns 1 on success, -1 on error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
