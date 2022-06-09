#include "main.h"

/**
 *print_last_digit - a function that prints the last digit of a number.
 *@x: number to do modulo
 *Return: last digit
 */
int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar('0' + x);

	return (x);
}
