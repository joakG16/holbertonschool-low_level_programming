#include <stdio.h>

/**
 * main - print a string to the standard error.
 * Return: 1
 */
int main(void)
{
	char str[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);

	return (1);
}
