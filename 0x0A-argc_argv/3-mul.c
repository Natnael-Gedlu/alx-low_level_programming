#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: total number of arguments
 * @argv: argument vector
 * Return: (0) success, (1) fail
 */

int main(int argc, char *argv[])
{
int x, y;
if (argc == 3)
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
	}
print("Error\n");
return (1);
}
