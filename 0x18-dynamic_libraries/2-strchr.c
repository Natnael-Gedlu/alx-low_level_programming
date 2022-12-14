#include "main.h"

/**
 * _strchr - searches for a character in string.
 * @s: string to be scanned.
 * @c: character to be searched.
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}

	return ('\0');
}
