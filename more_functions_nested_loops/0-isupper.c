#include "main.h"

/**
 *_isupper - a function that checks for uppercase character.
 *@c: case to be checked
 *Return: 1 if upperrcase  0 othercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
