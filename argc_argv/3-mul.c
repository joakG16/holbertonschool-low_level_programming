#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - a program that multiplies two numbers.
 *@argc: argument count
 *@argv: array of pointers to strings
 *Return: 0 if success
 */
int main(int argc, char **argv)
{

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
