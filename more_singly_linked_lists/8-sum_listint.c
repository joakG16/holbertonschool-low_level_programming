#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the
 *data (n) of a listint_t linked list.
 *@head: pointer to first node
 *Return: sum, 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
	{
		/* accessing the value of the current node */
		/* through the auxiliar dereferenced pointer-to-node */
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
