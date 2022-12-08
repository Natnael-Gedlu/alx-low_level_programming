#include "lists.h"
/**
 * list_len - finds list length
 * @h: pointer to the head of the function
 * Return: the length of the list
 */

unsigned int list_len(dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to pointer to head of the list
 * @idx: index in which node is added
 * @n: the number to be added
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	dlistint_t *new;
	dlistint_t *tmp = *h;
	dlistint_t *tmp1;

	if (h == NULL)
		return (NULL);

	len = list_len(tmp);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (idx > 0 && tmp != NULL)
	{
		tmp = tmp->next;
		idx--;
	}

	if (tmp == NULL)
		return (NULL);
	tmp1 = tmp->prev;
	new->next = tmp1->next;
	tmp1->next = new;
	new->prev = tmp1;
	tmp->prev = new;

	return (new);
}
