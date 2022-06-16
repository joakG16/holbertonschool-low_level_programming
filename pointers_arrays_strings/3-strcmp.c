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
		differ = s1[i] - s2[i];
			if (differ != 0)
				break;
	}
	if(differ == 0)
		return(0);
return(differ);
}
