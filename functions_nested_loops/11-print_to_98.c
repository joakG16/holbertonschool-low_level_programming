#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - a function that prints all natural numbers from n to 98, followed by a new line.
 *@n: the number passed to my function
 */
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 97; num++)
		{
			printf("%d, ",num);
		}
		printf("98\n");
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}

	if (n > 98)
	{
		for (num = n; num >= 97; num--)
		{
			printf("%d, ",num);
		}
		printf("98\n");
	}
}
