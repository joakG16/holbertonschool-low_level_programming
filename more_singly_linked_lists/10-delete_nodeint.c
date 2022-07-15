#include "lists.h"

/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previousindx, *current;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return(1);
	}
	while (--index && current != NULL)
	{
		previousindx = current;
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	previousindx->next = current->next;
	free(current);
	return (1);
}
