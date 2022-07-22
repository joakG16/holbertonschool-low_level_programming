#include "lists.h"

/**
 *dlistint_len - a function that returns the number of elements
 *in a DLL
 *@h: pointer/reference to struct of type dlistint_t
 *
 *Return: number of nodes counted
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
