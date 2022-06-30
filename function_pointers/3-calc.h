#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/**
 *op_functions - function to do the right calculation chosen
 */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *get_op_func - function that selects the correct function
 *to perform the operation asked by the user.
 */
int (*get_op_func(char *s))(int, int);

#endif
