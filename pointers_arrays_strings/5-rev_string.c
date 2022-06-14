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
 *rev_string - print reverse
 *
 *@s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, j, n;

	n = stlen(s);

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
