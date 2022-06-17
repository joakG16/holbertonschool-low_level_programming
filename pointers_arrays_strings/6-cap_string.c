#include "main.h"

/**
 *cap_string -
 *
 *@
 *Return: 
 */
char *cap_string(char *str)
{
	char syb[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		for (j = 0; syb[j]; j++)
		{
			if (str[i - 1] == syb[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
		}
	}
return (str);
}
