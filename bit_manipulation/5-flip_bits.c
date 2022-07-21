#include "main.h"

/**
 *countSetBits - count number of bits setted
 *@n: n ^ m
 *
 *Return: count
 */
unsigned int countSetBits(unsigned int long n)
{
	unsigned int count = 0;

	while (n > 0) /* n ^ m = 1, condition is true */
	{
		count++;
		n &= (n - 1); /* n = n & (n - 1) */
	}
	return (count);
}
/**
 *flip_bits - a function that returns the number of bits you would
 *need to flip to get from one number to another.
 *@n: number 1
 *@m: number 2
 *
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
