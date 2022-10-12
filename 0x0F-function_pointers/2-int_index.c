#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @size: number of elements in the array.
 * @cmp: pointer to the function.
 * @array: array to be searched.
 * Return: index of the first element, if no element
 * matches return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
		if (cmp(array[x]) != 0)
			return (x);
		}
	}
	return (-1);
}
