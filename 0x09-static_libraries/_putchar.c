#include <unistd.h>

/*
 * _putchar - writes c to the output stream
 * @c: singe character
 * Return: (1) success else (-1) on error 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
