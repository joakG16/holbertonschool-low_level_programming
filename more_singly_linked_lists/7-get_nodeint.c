#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns the nth node
 *of a listint_t linked list.
 *@head: pointer to first node
 *@index: desired node position, starting at 0
 *Return: the nth node, NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentnode;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	currentnode = head;
	i = 0;
	while (currentnode != NULL)
	{
		if (i == index)
			return (currentnode);
		i++;
		currentnode = currentnode->next;
	}
	return (NULL);
}
