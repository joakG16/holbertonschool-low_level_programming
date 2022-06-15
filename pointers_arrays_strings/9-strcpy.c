#include "main.h"

/**
 *_strcpy - function that copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest
 *@dest: buffer to be pointed to
 *@src: text
 *Return: copied text
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

return (dest);
}
