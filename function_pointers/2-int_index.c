#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 *int_index - a function that searches for an integer.
 *
 *@array: pointer to array
 *@size: array size
 *@cmp: pointer to function that performs the comparation
 *Return: the index of the first element for which the cmp function does not
 *return 0, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
