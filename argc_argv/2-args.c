#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - a program that prints all arguments it receives.
 *@argc: argument count
 *@argv: array of pointers to strings
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
