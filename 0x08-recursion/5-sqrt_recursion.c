#include "main.h"

/**
 * power_operation - returns the natural square root of a number
 * @n: number
 * @m: square root of number
 * Return: (m) else (-1)
 */
int power_operation(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
			return (m);
		else
			return (-1);
	}
	return (0 + power_operation(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of (n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
