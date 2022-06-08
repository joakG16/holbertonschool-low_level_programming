#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *@c: case to be checked
 *Return: 1 if lowercase, 0 othercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
