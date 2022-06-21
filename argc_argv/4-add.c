#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int sum = 0;

	if (argc < 2)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (int)strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return(1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

return(0);
}
