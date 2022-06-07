#include <stdio.h>

/**
 * main - print an alphabet using putchar
 * Return: zero if successful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
