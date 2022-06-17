#include "main.h"
#include <stddef.h>

/**
 *
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);

return(NULL);
}
