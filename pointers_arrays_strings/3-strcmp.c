#include "main.h"

/**
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int differ = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			differ = s1[i] - s2[i];
			return(differ);
		}
		else
			return(0);
	}
return(0);
}
