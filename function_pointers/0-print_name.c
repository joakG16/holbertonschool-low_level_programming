#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - a function that prints a name
 *@name: name passed to print, and to use as argument
 *@f: pointer to function that executes code to print the passed argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
