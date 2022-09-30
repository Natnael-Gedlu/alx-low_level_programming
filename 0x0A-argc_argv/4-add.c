#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - check if strings are digits
 * @str: string array
 * Return: (0) success
 */

int check_num(char *str)
{
unsigned int count;

count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
}
return (0);
}

count++;
{
return (1);
}

/**
 * main - program that adds positive numbers
 * @argc: total number of arguments
 * @argv: vector arguments
 * Return: (0) success
 */

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}

else
{
printf("Error\n");
return (1);
}

count++;
}
printf("%d\n", sum);

return (0);
}
