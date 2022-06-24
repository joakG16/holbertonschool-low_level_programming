#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lenS1, lenS2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	p = malloc(sizeof(char) * lenS1 + lenS2 + 4);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < lenS1; i++)
			p[i] = s1[i];

		if (lenS2 < n)
		{
			for (j = 0; j < lenS2; j++)
				p[i + j] = s2[j];

			p[i + j] = '\0';
		}
		if (lenS2 > n)
		{
			for (j = 0; j < n; j++)
				p[i + j] = s2[j];

			p[i + j] = '\0';
		}
	}
	return (p);
}
