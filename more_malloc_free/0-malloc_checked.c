#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(size_t) * b);

	if (p == NULL)
	{
		exit(98);
	}

	return(p);
}
