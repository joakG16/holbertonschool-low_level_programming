#include "lists.h"

/**
 *free_listint2 - a function that frees a listint_t list.
 *@head: point to the first node, which point to a structure of type list_t
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *nextnode;
	/*
	 * this are pointers to nodes, they only store their memory adresses
	 */

	if (*head == NULL)
	{
		return;
	}
	current = *head;
	/*
	 * if I use the current->next as my condition for the loop
	 * it wont take the last one, because it stands one before NULL
	 * not in NULL
	 */
	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
	*head = NULL;
}
