#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to the pointer to the head of the doubly linked list.
* @idx: Index where the new node should be added. Index starts at 0.
* @n: Integer value to be stored in the new node.
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int count = 0;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}

current = *h;
while (current != NULL)
{
if (count == idx - 1)
{
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
current = current->next;
count++;
}

free(new_node);
return (NULL);
}
