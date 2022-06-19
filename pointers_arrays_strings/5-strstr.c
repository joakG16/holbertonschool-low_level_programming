#include "main.h"
#include <stddef.h>

/**
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if(*needle == haystack[i])
				return(&haystack[i]);
		}
		needle++;
	}
	return(NULL);
}
