#include "main.h"
#include <stddef.h>

/**
 *
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);

return(NULL);
}
