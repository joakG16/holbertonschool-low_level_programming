#include "main.h"

/**
 *
 *
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			if (col == 7)
			{
				_putchar(a[row][col]);
				_putchar('\n');
			}
			else
				_putchar(a[row][col]);
		}
	}
}
