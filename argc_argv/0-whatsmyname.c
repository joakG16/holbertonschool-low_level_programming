#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that prints its name, followed by a new line.
 *@argc: unused parameter
 *@argv: name of function
 *Return: 0 if success
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
