#include "lists.h"

/**
 *add_node_end - a function that adds a new node at the end of a list_t list.
 *@head: point to the first node, which point to a structure of type list_t
 *@str: value to fill the variable of the new node
 *Return: the adress of the new element, NULL if it failed
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
	/**
	 *This new node is going to be the last node, so make next
	 *of it as NULL
	 */
	new_node->next = NULL;

	/* If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* traverse till the last node */
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		/* Change the next of last node */
		lastNode->next = new_node;
	}
	return (new_node);
}
