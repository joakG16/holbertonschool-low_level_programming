#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < (int)strlen(s1); i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < (int)strlen(s2); j++)
		{
			s[i + j] = s2[j];
		}
		s[i + j] = '\0';
	}
	return (s);

}
