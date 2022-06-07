#include <stdio.h>

/**
 * main - print base16 using putchar
 * Return: zero if successful
 */
int main(void)
{
	int n = 0;
	char alph;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar ('\n');

	return (0);
}
