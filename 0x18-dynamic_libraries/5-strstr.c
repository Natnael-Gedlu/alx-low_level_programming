#include "main.h"

/**
 * _strstr - finds first occurrence of the substring needle
 *in the string haystack.
 * @haystack: string to be scanned.
 * @needle: string to be searched within haystack
 *
 * Return: a pointer to first occerance in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
