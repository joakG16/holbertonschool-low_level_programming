#include "lists.h"

/**
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (h != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
