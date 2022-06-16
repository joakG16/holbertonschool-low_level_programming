#include "main.h"
#include <stddef.h>

/**
 *stlen - count num of char in passed string
 *@s: string given
 *Return: count
 */
int stlen(char *s)
{
	int count = 0;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
return (count);
}
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

	if (n >)
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
