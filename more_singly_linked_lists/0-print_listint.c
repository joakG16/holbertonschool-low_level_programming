#include "lists.h"

/**
 *print_list - a function that prints all the elements of a listint_t list.
 *@h: pointer to struct of type listint_t (pointing to the first node)
 *Return: node counter
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
