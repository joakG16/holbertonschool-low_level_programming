#include "search_algos.h"

/**
 *
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array || !size || !value)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (array[idx] == value)
			return (array[idx]);
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}
	return (-1);
}
