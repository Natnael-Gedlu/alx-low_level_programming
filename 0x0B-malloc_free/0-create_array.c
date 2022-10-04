#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: (pointer) else (NULL)
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	else
	{
	i = 0;
	while (i < size)
	{
	*(ptr + i) = c;
	position++;
	}
	return (ptr);
	}
