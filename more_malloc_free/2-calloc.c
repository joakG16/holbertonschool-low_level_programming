#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory(set to 0) for an
 *array, using malloc.
 *@nmemb: elements of the array
 *@size: size of each element
 *Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *callc;
	char *p;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	callc = malloc(nmemb * size);

	if (callc == NULL)
	{
		return (NULL);
	}

	p = callc;

	for (index = 0; index < nmemb * size; index++)
	{
		p[index] = 0;
	}
	return (callc);
}
