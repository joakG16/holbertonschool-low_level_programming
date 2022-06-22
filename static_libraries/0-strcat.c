#include "main.h"

/**
 *_strcat - concatenate strings
 *@dest: string to be appended
 *@src: string to append
 *Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

return (dest);
}
