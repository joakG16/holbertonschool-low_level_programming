#include "main.h"

/**
 *print_line - a function that draws a straight line
 *@n: number of lines
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
