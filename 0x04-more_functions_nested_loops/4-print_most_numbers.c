#include "main.h"
/**
 * print_most_numbers - prints numbers 0-9 except 2&4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
