#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates a character in a string
 *
 *@s: string to be checked
 *@c: character to locate
 *Return: a pointer to the first occurrence of the character c in the string s
 *Null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);

return (NULL);
}
