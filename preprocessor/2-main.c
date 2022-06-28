#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that print the name it was compiled from
 *Return: 0 if success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
