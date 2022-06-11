#include "main.h"

/**
 *print_diagonal - print a diagonal
 *@n: number of diagonals
 */
void print_diagonal(int n)
{
	int count;
	int spc;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			for (spc = 1; spc <= n; spc++)
			{
				if (spc == count)
				{
					_putchar('\\');
				}
				else
					_putchar('.');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
