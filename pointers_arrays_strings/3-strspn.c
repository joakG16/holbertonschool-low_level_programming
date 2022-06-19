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

/**
 *_strspn - a function that gets the length of a prefix substring
 *
 *@s: string to be scanned.
 *@accept: string containing the characters to match.
 *Return: the number of characters in the initial segment of s
 *which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

        if((s == NULL) || (accept == NULL))
		return len;
    
	while(*s && _strchr(accept, *s++))
	{
		len++;
	}
	return len;
}
