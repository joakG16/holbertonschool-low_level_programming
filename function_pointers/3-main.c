#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result = 0;
	int (*op)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (!op || argv[2][0] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = op(num1, num2);

	printf("%d\n", result);

	return(0);
}
