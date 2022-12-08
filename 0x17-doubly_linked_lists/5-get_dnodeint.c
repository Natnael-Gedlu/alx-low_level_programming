#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at index
 * @head: pointer to the head of the list
 * @index: index
 * Return:  the nth node of a dlistint_t linked list,
 * NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	if (index == 0)
	{
		return (node);
	}
	while (index > 0 && node != NULL)
	{
		node = node->next;
		index--;
	}
	if (node == NULL)
		return (NULL);

	return (node);
}
