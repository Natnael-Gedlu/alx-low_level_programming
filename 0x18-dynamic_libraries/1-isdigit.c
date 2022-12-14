#include "main.h"
/**
 * _isdigit - checks if value is b/n 0-9
 * @c: input to check
 *
 * Return: return 1 if uppercase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
