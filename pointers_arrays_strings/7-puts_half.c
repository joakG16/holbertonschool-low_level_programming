#include "main.h"

/**
 *stlen - count num of char in passed string
 *@s: string given
 *Return: count
 */
int stlen(char *s)
{
	int count = 0;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
return (count);
}

/**
 *puts_half - print second half
 *@str: string passed
 */
void puts_half(char *str)
{
	int cmid = 0;
	int i = 0;
	int c = 0;

	c = stlen(str);

	if (c % 2 == 0)
		cmid = c / 2;
	else
		cmid = (c - 1) / 2;

	for (i = cmid; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
