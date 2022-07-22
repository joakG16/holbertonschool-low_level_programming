#include "lists.h"

/**
 *add_dnodeint - add node at start
 *@head: refernce to head
 *@n: data
 *
 *Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (*head != NULL)
		(*head)->prev = newnode;
	else
		newnode->prev = NULL;
	/*
	 *next node (which was the first on the list) is going
	 *to be the after the new allocated node
	 */
	 newnode->next = *head;
	 *head = newnode;

	return (*head);
}
