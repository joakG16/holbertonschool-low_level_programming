#include "main.h"

/**
 *_strncpy - copy contents of src to dest
 *
 *@dest: Destination string. The string in
 *which the first n characters of src are copied.
 *@src: Source string
 *@n: number of characters of source string that needs to be copied.
 *Return: pointer to the destination string after
 *copying the n characters of source string into it.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
