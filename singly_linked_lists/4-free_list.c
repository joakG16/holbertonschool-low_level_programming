#include "lists.h"

/**
 *free_list - a function that frees a list_t list.
 *@head: pointer to node
 */
void free_list(list_t *head)
{
	list_t *actualNode;

	while (head != NULL)
	{
		/* 
		 * "save" the node it is currently standing
		 * so when I free it, next doesn't get lost also
		 */
		actualNode = head;
		head = head->next;
		/* remember to free also the values of the node */
		free(actualNode->str);
		free(actualNode);
	}
}
