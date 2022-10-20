#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: head of the linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		n = head->next;
		free(n->str);
		free(n);
	}
}
