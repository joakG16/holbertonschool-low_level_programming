#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node at the end of
 *a listint_t list.
 *@head: double pointer cointaining the first pointer to node
 *@n: value to fill the new node
 *Return: a pointer of type listnint_t
 *containing the adress to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return (newnode);

}
