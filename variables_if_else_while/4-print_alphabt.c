#include <stdio.h>

/**
 * main - print an alphabet (except for letters e and q)using putchar
 * Return: zero if successful
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{

		if (alph == 'e' || alph == 'q')
		{
			alph++;
		}
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
