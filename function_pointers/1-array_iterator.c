#include "function_pointers.h"
#include <stddef.h>

/**
 *array_iterator - a function that executes a function
 *given as a parameter on each element of an array.
 *
 *@array: pointer to the array of elements
 *@size: array size
 *@action: pointer to desired function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
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
