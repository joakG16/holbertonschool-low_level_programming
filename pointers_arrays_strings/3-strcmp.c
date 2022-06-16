#include "main.h"

/**
 *_strcmp - string comparation
 *
 *@s1: first string to compare
 *@s2: second string
 *Return: diference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int differ = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		differ = s1[i] - s2[i];
			if (differ != 0)
				break;
	}
	if (differ == 0)
		return (0);
return (differ);
}
