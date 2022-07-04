#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	fmt_t fmt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_list args;
	int i, j;
	int num_args = strlen(format);
	char *separator = "";

	va_start(args, format);

	i = 0;
	while (i < num_args)
	{
		j = 0;
		while (fmt[j].type != '\0')
		{
			if (fmt[j].type == format[i])
			{
				printf("%s", separator);
				fmt[j].print_type(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

/**
 *print_char - print a char
 *@args: argument
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *print_int - print int
 *@args: argument
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *print_float - print float
 *@args: argument
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *print_str - print string
 *@args: argument
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if(str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
