#include <stdio.h>

/**
 *main - print numbers
 *Return: 0 if succes
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz");
			i++;
			continue;
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
