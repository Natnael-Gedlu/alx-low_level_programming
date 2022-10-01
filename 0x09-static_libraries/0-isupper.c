#include "main.h"
/**
 * _isupper - checks if value is uppercase
 * @c: input to check
 *
 * Return: return 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
