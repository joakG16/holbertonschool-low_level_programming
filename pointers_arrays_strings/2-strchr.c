#include "main.h"
#include <stddef.h>

/**
 *
 *
 */
char *_strchr(char *s, char c)
{

	while(*s)
	{
		if(*s == c)
			return(s);
		else
			return (NULL)
		s++;
	}

	return(0);
}
