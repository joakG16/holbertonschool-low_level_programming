#include "lists.h"

/**
 *list_len - a function that returns the number of elements
 *in a linked list_t list.
 *@h: pointer to struct of type list_t
 *Return: counter
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next; /* traversing the linked list */
		count++;
	}
	return (count);
}
