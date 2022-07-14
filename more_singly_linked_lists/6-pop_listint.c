#include "lists.h"

/**
 *pop_listint - a function that deletes the head node of a listint_t
 *linked list, and returns the head node’s data (n).
 *@head: double pointer
 *Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_tmp_data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		/* hold adress of what head is pointing to */
		tmp = *head;
		/* take data before the node is deleted */
		head_tmp_data = (*head)->n;
		/* point to the next element */
		*head = (*head)->next;
		free(tmp);
	}
	return (head_tmp_data);
}
