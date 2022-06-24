#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *_strdup - main
 *@str: string
 *Return: pointer to allocated memory
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * strlen(str) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (int)strlen(str); i++)
		{
			s[i] = str[i];
		}
		s[i] = '\0';
	}
	return (s);
}
