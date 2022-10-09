#include "main.h"

/**
 * _strpbrk - finds character in s that matches
 *any charater in accept.
 * @s: string to be scanned.
 * @accept: containes cahracters to match.
 *
 * Return: bytes in s that matches bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
