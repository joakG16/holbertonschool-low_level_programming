#include "main.h"
#include <stddef.h>

/**
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	if ((dest == NULL) && (src == NULL))
		return(NULL);

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
