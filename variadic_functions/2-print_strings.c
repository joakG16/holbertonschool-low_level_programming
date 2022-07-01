#include "variadic_functions.h"
#include "stdio.h"
#include "stddef.h"

/**
 *print_strings - print strings
 *@separator: the string to be printed between the strings
 *@n: the number of strings passed to the function
 *va_arg goes and reads the amount of bytes specified in it,
 *so it is continuous, thats why the actual read needs to be stored in a
 *variable when asking the NULL condition, so it doesn't skips a read,
 *for a more easy way to imagine it, think of it as a for loop (EACH va_arg)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *actual_arg;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		actual_arg = va_arg(strs, char *);

		if (actual_arg == NULL)
			printf("(nil)");
		else
			printf("%s", actual_arg);
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	 printf("\n");
}
