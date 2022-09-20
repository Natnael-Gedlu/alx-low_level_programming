#include <stdio.h>
#include "main.h"

/**
* print_array - prints n element of array of integers
* @a: array
* @n: number of elements
* Return: Always 0 (Success)
*/

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	putchar(10);
}
