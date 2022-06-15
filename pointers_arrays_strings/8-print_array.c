#include "main.h"

/**
 *print_array - print an array
 *@a: pointer to array
 *@n: number of elements within array
 */
void print_array(int *a, int n)
{
	int ind = 0;

	for (ind = 0; ind <= n; ind++)
	{
		if (ind == n)
		{
			printf("\n");
			break;
		}
		printf("%d, ", a[ind]);
	}
}
