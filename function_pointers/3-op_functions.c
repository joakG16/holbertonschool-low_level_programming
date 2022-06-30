#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - add two integers
 *@a: int
 *@b: int
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - substract two integers
 *@a: int
 *@b: int
 *Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply two integers
 *@a: int
 *@b: int
 *Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divide two integers
 *@a: int
 *@b: int
 *Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - a modulo b
 *@a: int
 *@b: int
 *Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
