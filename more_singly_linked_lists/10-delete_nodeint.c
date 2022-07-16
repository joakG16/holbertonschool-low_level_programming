#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node at
 *index index of a listint_t linked list.
 *@head: double pointer to pointer to node
 *@index: given index to remove node
 *Return: 1 if succeed, -1 if fail
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
		return (1);
	}
	/* if I decrement the value first, in a case of index = 1, */
	/* the function wont work because index will be 0 when loop starts */
	/* thats why it has to be decremented after being "first tested" */
	while (index-- && current != NULL)
	{
		previousindx = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previousindx->next = current->next;
	free(current);
	return (1);
}
