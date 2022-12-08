#include "lists.h"

/**
 * print_dlistint - prints all elements of a list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
