#include "main.h"

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: number of memory
 * Return: 0 success
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}

return (p);
}


