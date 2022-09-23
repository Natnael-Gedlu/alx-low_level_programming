#include "main.h"

/**
 * more_numbers - prints 10x the numbers 0-14
 *
 * Return: Always 0
 */

void more_numbers(void);
{
	int i = 0;
	int j = 0;

	for (i <= 9; i++)
	{
		for (j <= 14; j++)
		{
			if (j >= 10)
				_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
