#include "function_pointers.h"

/**
 * print_name -prints a name.
 * @name: the name printed.
 * @f: pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
