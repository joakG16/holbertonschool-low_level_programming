#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that prints the number of arguments passed into it.
 *@argc: number of arguments passed
 *@argv: pointer to the array of string containing the argument's name
 *Return: 0 if success
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int count = 0;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
		}
		printf("%d\n", count - 1);
	}

	return (0);
}
