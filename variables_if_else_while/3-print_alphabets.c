#include <stdio.h>

/**
 * main - print an alphabet (both lower and upper)using putchar
 * Return: zero if successful
 */
int main(void)
{
	char alph;
	char ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}
	putchar('\n');

	return (0);
}
