#include "main.h"

/**
 *
 *
 */
unsigned int countSetBits(unsigned int long n)
{
    unsigned int count = 0;
    while (n > 0) /* n ^ m = 1, condition is true */
    {
        count++;
        n &= (n - 1); /* n = n & (n - 1) */
    }
    return count;
}
/**
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
