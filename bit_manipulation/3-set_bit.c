#include "main.h"

/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1 << index;
	*n = *n | mask;

	return (1);	
}
