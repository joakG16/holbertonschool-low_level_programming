#include "main.h"

/**
 *_isdigit - a function that checks for digits.
 *@c: case to be checked
 *Return: 1 if digit  0 othercase
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
