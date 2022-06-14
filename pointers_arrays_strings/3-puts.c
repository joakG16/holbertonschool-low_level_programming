#include "main.h"

/**
 *_puts - print a string to stdout, followed by a new line
 *
 *@str: string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
