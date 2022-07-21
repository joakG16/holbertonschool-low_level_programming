#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head; /*next node (which was the
				 first on the list) is going to be the
				 after the new allocated node */
	*head = newnode;

	return(*head);
}
