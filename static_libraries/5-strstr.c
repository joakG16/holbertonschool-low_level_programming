#include "main.h"
#include <stddef.h>

/**
 *_strstr - a function that locates a substring.
 *
 *@haystack: string
 *@needle: substring
 *Return: a pointer to the beginning of the located
 *substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int len = 0;

	while (needle[len] != '\0')
		len++;

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
