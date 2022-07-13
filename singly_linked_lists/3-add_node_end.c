#include "lists.h"

/**
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *lastNode;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		lastNode = *head;
		while(lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = new_node;
	}
	return(new_node);
}
