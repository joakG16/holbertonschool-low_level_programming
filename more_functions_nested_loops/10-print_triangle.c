#include "main.h"

/**
 *print_triangle - print a triangle
 *@size: triangle size
 */
void print_triangle(int size)
{
	int i, spc, hash;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (spc = size - i; spc > 0; spc--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= i; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
