#include "main.h"

/**
 *jack_bauer - a function that prints every minute of the
 *day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hs;
	int ms;

	for (hs = 0; hs < 24; hs++)
	{
		for (ms = 0; ms < 60; ms++)
		{
			_putchar((hs / 10) + '0');
			_putchar((hs % 10) + '0');
			_putchar(':');
			_putchar((ms / 10) + '0');
			_putchar((ms % 10) + '0');
			_putchar('\n');
		}
	}

}
