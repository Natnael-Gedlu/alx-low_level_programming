#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 *
 * Return: (0) sucess else (NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "",

	if (s2 == NULL)
		s2 = "",

	for (index = 0; s1[index]; index++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s2[index] && index < n; index++)
		p[len++] = s2[index];

	p[len] = '\0';

	return (p);
}
