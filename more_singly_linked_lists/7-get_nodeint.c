#include "lists.h"

/**
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentnode;
	unsigned int i;

	if (head == NULL)
	{
		return(NULL);
	}
	currentnode = head;
	i = 0;
	while (currentnode != NULL)
	{
		if (i == index)
			return(currentnode);
		i++;
		currentnode = currentnode->next;
	}
	return(NULL);
}
