#include "lists.h"

/**
 *
 *
 */
void free_list(list_t *head)
{
	list_t *actualNode;

	while(head != NULL)
	{
		actualNode = head;
		head = head->next;
		free(actualNode->str);
		free(actualNode);
	}
}
