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
 */
char *_strpbrk(char *s, char *accept)
{
	int len1 = 0;
	int len2 = 0;
	int i,j;

	while (*s)
	{
		len1 = stlen(s);
		len2 = stlen(accept);

		for (i = 0; i < len1; i++)
		{
			for (j = 0; j < len2; j++)
        		{
				if (s[i] == accept[j])
				{
					return(&s[i]);
				}
        		}
		}
	}
	return(NULL);

}
