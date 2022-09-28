#include "main.h"

int is_divisible(int x, int y);
int is_prime_number(int n);

/**
 * is_divisible - checks if 'x' is divisible
 * @x: number checked if divisible or not
 * @y: the divisor
 * Return: (1) if x is divisible else (0)
 */

int is_divisible(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);
	return (is_divisible(x, y + 1));
}
