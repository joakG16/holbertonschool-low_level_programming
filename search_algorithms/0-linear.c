#include "search_algos.h"

/**
 *linear_search - a function that searches for a value in an
 *array of integers using the Linear search algorithm
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the first index where value is located, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array || !size || !value)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
