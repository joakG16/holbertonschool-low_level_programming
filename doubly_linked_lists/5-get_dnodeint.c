#include "lists.h"

/**
 *get_dnodeint_at_index - a function that returns the nth node
 *of a DLL.
 *@head: pointer to first node
 *@index: desired node position, starting at 0
 *Return: the nth node, NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentnode;
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
