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

/**
 *insert_dnodeint_at_index - insert node at idxth position
 *@h: double pointer
 *@idx: index given to put new node
 *@n: data for the new node
 *
 *Return: pointer to newnode positioned, null if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *traverser;
	unsigned int i, listsize = 0;

	listsize = dlistint_len(*h);
	newnode = malloc(sizeof(dlistint_t));

	if (!newnode || idx > listsize)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		return(add_dnodeint(h, n));
	}
	else
	{
		traverser = *h;
		for(i = 0; i < idx - 1; i++)
		{
				traverser = traverser->next;
		}
		if (traverser != NULL)
		{
			newnode->prev = traverser;
			newnode->next = traverser->next;
			if (traverser->next != NULL)
				newnode->next->prev = newnode;
			else
				return(add_dnodeint_end(h, n));
			traverser->next = newnode;
		}
		else
		{
			free(newnode);
			return(NULL);
		}
	}
		return(newnode);

}
