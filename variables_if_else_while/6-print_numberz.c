#include <stdio.h>

/**
 * main - print digits using putchar
 * Return: zero if successful
 */
int main(void)
{
	int n = 0;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar ('\n');

	return (0);
}
