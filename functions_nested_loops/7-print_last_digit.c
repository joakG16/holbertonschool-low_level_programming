#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number.
 *
 */
int print_last_digit(int x)
{	
	int lastdig = 0;

	if (x < 0)
	{
		x = x * -1;
	}
	lastdig = x % 10;
	_putchar(lastdig + '0');

	return (lastdig);
}
