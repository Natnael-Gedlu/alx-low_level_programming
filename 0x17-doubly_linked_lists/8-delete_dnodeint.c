#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index.
* @head: Pointer to the pointer to the head of the doubly linked list.
* @index: Index of the node that should be deleted. Index starts at 0.
* Return: 1 if deletion succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int count = 0;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

while (current != NULL)
{
if (count == index)
{
temp = current;
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(temp);
return (1);
}
current = current->next;
count++;
}

return (-1);
}
