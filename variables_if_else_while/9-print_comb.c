#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: zero if successful
 */
int main(void)
{
	int num1 = 48;

	while(num1 <= 57)
	{
		putchar(' ');
		putchar(num1);
		putchar(',');
		num1++;
	}

	return (0);
}
