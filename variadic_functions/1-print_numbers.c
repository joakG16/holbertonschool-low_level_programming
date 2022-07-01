#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_numbers - print numbers
 *@separator: is the string to be printed between numbers
 *@n: numbers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
