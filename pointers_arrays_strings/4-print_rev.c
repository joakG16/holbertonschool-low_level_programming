#include "main.h"

/**
 *print_rev - print reverse
 *
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	i = j - 1;
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
