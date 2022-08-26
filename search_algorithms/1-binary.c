#include "search_algos.h"

/**
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, mid = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (value > array[mid])
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (-1);
}
