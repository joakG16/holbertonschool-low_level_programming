#include "main.h"

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
 *_strncat - concatenates two strings.
 *
 *@dest: the string where we want to append
 *@src: the string from which ‘n’ characters are going to append.
 *@n: represents a maximum number of characters to be appended.
 *Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int maxcount;

	maxcount = stlen(src);

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	if (maxcount < n)
	{
		for (j = 0; j < maxcount; j++)
		{
			dest[i + j] = src[j];
		}
		dest[i + j] = '\0';
	}

	if (maxcount > n)
	{
		for (j = 0; j < n; j++)
		{
			dest[i + j] = src[j];
		}
	}

return (dest);
}
