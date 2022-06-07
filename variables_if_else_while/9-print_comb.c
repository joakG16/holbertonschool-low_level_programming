#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Return: zero if successful
 */
int main(void)
{
	int num1 = 48;
	int num2 = 48;

	while (num1 <= 57)
	{
		putchar(num1);
		while (num2 <= 57)
		{
			putchar(num2);
			num2++;
		}
		num1++;
		putchar(',');
		putchar(' ');
	}

	return (0);
}
