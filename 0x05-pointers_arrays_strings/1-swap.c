#include "main.h"

/**
*swap_int - swaps the value of two integers
*@a: 1st integer
*@b: 2nd integer
*Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
