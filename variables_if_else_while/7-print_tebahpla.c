#include <stdio.h>

/**
 * main - print an alphabet in reverse using putchar
 * Return: zero if successful
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
