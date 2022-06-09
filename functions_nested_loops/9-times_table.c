#include "main.h"

/**
 *times_table -  a function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int col, fil;
	int res = 0;

	for (col = 0; col < 10; col++)
	{
		for (fil = 0; fil < 10; fil++)
		{
			res = fil * col;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			if (res >= 10)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (fil > 8)
				break;
			else
				_putchar(',');
		}
		_putchar('\n');
	}
}
