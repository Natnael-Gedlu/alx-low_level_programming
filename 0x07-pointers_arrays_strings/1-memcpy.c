#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination array.
 * @src: pointer to data to be copied.
 * @n: number of bites to be copied.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		dest[x] = src[x];
	}

	return (dest);
}
