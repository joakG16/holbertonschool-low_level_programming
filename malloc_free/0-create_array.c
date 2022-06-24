#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
 *create_array - main
 *@size: array size
 *@c: initialize with this char
 *Return: pointer to allocated memory with the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			str[i] = c;
	}
	return (str);
}
