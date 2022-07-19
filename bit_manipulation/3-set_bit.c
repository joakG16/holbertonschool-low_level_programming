#include "main.h"

/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1 << index;
	return (*n = *n | mask);
}
