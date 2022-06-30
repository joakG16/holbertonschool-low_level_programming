#include "3-calc.h"

/**
 *get_op_func - pointer to function that takes a string as
 *parameter and returns a function, that takes 2 ints as parameters, doing the
 *corresponding for the matched operand
 *@s: string containg the operand
 *Return: function to calculation, null if operand not matched
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
