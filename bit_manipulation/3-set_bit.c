#include "main.h"

/**
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter;

	if (index > 63)
	{
		return (-1);
	}
	setter = 1 << index;
	*n = *n | setter;

	return (1);
	
}
