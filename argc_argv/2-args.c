#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 */
int main(int argc, char **argv)
{
	int i = 0;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
