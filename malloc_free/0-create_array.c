#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return NULL;

	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return NULL;

	return(str);
}
