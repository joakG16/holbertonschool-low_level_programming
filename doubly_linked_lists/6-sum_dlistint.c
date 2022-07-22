#include "lists.h"

/**
 *sum_dlistint - sum data of nodes
 *@head: head
 *
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		current = head;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
