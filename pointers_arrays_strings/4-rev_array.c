#include "main.h"

/**
 *reverse_array - function that reverses the content of an array of integers.
 *@a: pointer to array
 *@n: number of elements from array
 */
void reverse_array(int *a, int n)
{
	int fir, las;
	int temp = 0;

	for (fir = 0, las = n - 1; fir < las; fir++, las--)
	{
		temp = a[las];
		a[las] = a[fir];
		a[fir] = temp;
	}
}
