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
 *
 *
 *
 */
