#include <stdio.h>

/**
 * main - print all single digit numbers
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
