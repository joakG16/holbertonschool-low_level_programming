#include "lists.h"

/**
 *listint_len - a function that returns the number of elements
 *in a linked listint_t list.
 *@h: pointer to struct of type list_t
 *Return: counter
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *nextnode;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index = 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1, i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	nextnode = current->next->next;
	free(current->next);
	current->next = nextnode;

	return(1);
}
