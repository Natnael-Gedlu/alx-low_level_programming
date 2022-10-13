#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers.
 * @n: number of functions.
 * @separator: string to be printed.
 * @...: variable numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int index;

	va_start(m, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(m, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(m);
}
