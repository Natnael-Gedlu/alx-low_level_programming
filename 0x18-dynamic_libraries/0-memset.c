#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: bytes to be set to value
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
