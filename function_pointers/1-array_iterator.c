#include "function_pointers.h"
#include <stddef.h>

/**
 *
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
