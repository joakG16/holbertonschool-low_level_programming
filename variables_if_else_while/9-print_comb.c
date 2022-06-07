#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: zero if successful
 */
int main(void)
{
	int num1 = 0;

	for (num1 = 48; num1 <= 57;)
	{
		putchar(num1);
		if (num1 == 57)
			break;
		putchar(',');
		putchar(' ');
		num1++;
	}
	putchar('\n');

	return (0);
}
