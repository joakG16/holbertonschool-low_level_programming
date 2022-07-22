#include "lists.h"

/**
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delnode, *prevnode;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		delnode = *head;
		*head = (*head)->next;
		free(delnode);
		if ((*head) != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prevnode = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (prevnode != NULL)
				prevnode = prevnode->next;
		}
		if(prevnode && prevnode->next != NULL)
		{
			delnode = prevnode->next;
			prevnode->next = prevnode->next->next;
			if (prevnode->next->next != NULL)
				prevnode->next->next->prev = prevnode->next;
			free (delnode);
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}
