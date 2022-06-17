#include "main.h"

/**
 *leet - encodes a string into 1337.
 *
 *@str: string passed
 *Return: string encoded
 */
char *leet(char *str)
{
	char upp[] = {'a', 'e', 'o', 't', 'l'};
	char low[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		j = 0;
		while (upp[j] && low[j] && num[j])
		{
			if (str[i] == upp[j] || str[i] == low[j])
			{
				str[i] = num[j];
			}
			j++;
		}
	}
	return (str);
}
