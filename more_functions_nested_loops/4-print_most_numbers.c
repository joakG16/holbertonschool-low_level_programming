#include "main.h"

/**
 * print_most_numbers - print all single digit numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int dig = 0;

	for (dig = 48; dig <= 57; dig++)
	{

		if (dig == 50 || dig == 52)
		{
			dig++;
		}
		_putchar(dig);
	}
	_putchar('\n');
}
