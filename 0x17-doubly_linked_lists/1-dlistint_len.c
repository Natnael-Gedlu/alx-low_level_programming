#include "lists.h"

/**
 * dlistint_len - prints all elements of a list.
 * @h: pointer to the head of the list.
 * Return: the length of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
