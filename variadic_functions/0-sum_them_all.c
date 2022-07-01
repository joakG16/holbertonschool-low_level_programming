#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: constant value representing the number of variadic arguments passed
 *Return: sum result, 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;	
	va_list argu;

	if (n == 0)
	{
		return (0);
	}

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		result +=va_arg(argu, int);
	}
	va_end(argu);

	return (result);
}
