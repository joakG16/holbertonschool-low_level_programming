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
	listint_t *current, *previous;
	unsigned int size;

	size = listint_len(*head);

	if (size < index || *head == NULL)
	{
		return(-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return(1);
	}
	while (--index)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);

	return (1);
}
