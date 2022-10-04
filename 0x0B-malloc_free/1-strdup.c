#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly
 * allocated space
 * @str: duplicated string
 * Return: (pointer) else (NULL)
 */

char *_strdup(char *str);
{
	char *dup;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		dup[index] = str[index];
	}
	dup[len] = '\0';
	return (dup);
}

