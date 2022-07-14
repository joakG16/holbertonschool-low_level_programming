#include "lists.h"

/**
 *add_nodeint - a function that adds a new node at the beginning
 *of a listint_t list
 *@head: point to the first node, which point to a structure of type list_t
 *@n: int to fill value of new node
 *Return: the adress of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;

	*head = new_node;

	return (*head);
}
