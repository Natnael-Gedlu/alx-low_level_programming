#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: total number of arguments
 * @argv: argument vector
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
