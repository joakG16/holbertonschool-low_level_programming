#include "lists.h"

/**
 *free_listint - a function that frees a listint_t list.
 *@head: pointer to first node
 *use an extra node to avoid losing the next nodes after freeing the current
 */
void free_listint(listint_t *head)
{
	listint_t *currentnode;

	while (head != NULL)
	{
		currentnode = head;
		head = head->next;
		free(currentnode);
	}
}
