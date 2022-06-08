#include "main.h"

/**
 *print_alphabet - Function that prints the
 *alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
