#include "main.h"

/**
 *_aux_sqrt - auxiliar function to check if n has square root or not
 *
 *@i: number to help
 *@n: to check it
 *Return: i, -1 or recursion
 */
int _aux_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (_aux_sqrt(i + 1, n));
}

/**
 *_sqrt_recursion - a function that returns the natural sqrot of a number.
 *
 *@n: number passed
 *Return: root
 */
int _sqrt_recursion(int n)
{
	return (_aux_sqrt(1, n));
}
