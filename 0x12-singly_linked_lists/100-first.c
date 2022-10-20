#include <stdio.h>

/**
 * first - function precceds main function.
 * Return: nothing.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
