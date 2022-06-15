#include "main.h"
#include <stdio.h>

/**
 *print_array - print an array
 *@a: pointer to array
 *@n: number of elements within array
 */
void print_array(int *a, int n)
{
	int ind = 0;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);

		if (ind == n - 1)
		{
			printf("\n");
			continue;
		}

		printf(", ");
	}
}
