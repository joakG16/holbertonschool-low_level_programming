#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i, diff;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min;
	p = malloc(sizeof(int) * (diff + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return(p);
}
