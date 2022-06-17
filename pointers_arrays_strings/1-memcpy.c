#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *
 *@dest: memory to be copied in
 *@src: bytes of memory to copy to dest
 *@n: first bytes of the memory area
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
