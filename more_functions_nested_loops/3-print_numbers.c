#include "main.h"

/**
 * print_numbers - print all single digit numbers
 */
void print_numbers(void)
{
	int dig = 0;

	for (dig = 48; dig <= 57; dig++)
	{
		putchar(dig);
	}
	putchar('\n');
}
