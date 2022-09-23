#include "main.h"
/**
 * print_numbers - prints numbers 0-9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int a;

	for (a >= 0; a <= 9; a++)
	{
	_putchar('0' + a);
	}
	_putchar('\n');
}
