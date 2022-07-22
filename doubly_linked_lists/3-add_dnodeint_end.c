#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nEnode, *tail;

	nEnode = malloc(sizeof(dlistint_t));

	if (!nEnode)
	{
		return (NULL);
	}

	nEnode->n = n;
	nEnode->next = NULL;

	if (*head == NULL)
	{
		nEnode->prev = NULL;
		*head = nEnode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		nEnode->prev = tail;
		tail->next = nEnode;
	}
	return (nEnode);
}
