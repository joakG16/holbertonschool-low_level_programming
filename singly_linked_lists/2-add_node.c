#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list_t list
 *@head: point to the first node, which point to a structure of type list_t
 *@str: value to fill the variable of the new node
 *Return: the adress of the new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head; /* setting to where head is pointing to,
				 * which is the first node
				 */
	*head = new_node; /* now head holds new_node, and
			   * the ex-first is next to new_node
			   */
	return (*head);
}
