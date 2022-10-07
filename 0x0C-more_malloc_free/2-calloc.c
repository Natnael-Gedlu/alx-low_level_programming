#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of elements in the array
 * @size: The byte size of each element in array
 *
 * Return: (0) success else (NULL)
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	void *mem;

	char *filler;

	unsigned int index;



	if (nmemb == 0 || size == 0)

		return (NULL);



	mem = malloc(size * nmemb);



	if (mem == NULL)

		return (NULL);



	filler = mem;



	for (index = 0; index < (size * nmemb); index++)

		filler[index] = '\0';



	return (mem);

}

