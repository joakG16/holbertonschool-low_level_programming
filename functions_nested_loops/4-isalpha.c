#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character.
 *@c: case to be checked
 *Return: 1 if lowercase or upercase, 0 othercase
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
