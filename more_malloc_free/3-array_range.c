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
	int i, diff, start;

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
	i = 0;
	for (start = min; start <= max; start++)
	{
		p[i] = start;
		i++;
	}
	return(p);
}
