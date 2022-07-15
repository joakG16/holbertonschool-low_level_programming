#include "lists.h"

/**
 *listint_len - a function that returns the number of elements
 *in a linked listint_t list.
 *@h: pointer to struct of type list_t
 *Return: counter
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	unsigned int listsize = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	listsize = listint_len(*head);
	/* if index given is bigger than my list */
	if (idx > listsize)
	{
		return (NULL);
	}
	/* if i need to insert in the first node */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		current = *head;
		/* traverse until the index gets to 0 (inverted) */
		while (--idx)
			current = current->next;
		/* assign new node's next to matched index's node's next */
		newnode->next = current->next;
		/* "move"(assign) matched index's node next to the new one */
		current->next = newnode;
	}
	return (newnode);
}
