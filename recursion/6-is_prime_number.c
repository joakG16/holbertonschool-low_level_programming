#include "main.h"

/**
 *CheckPrime - check if n is prime or not
 *@n: number passed
 *@i: n/2
 *Return: 1 if prime, 0 if else
 */
int CheckPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (CheckPrime(n, i - 1));
		}
	}
}
/**
 *is_prime_number -  a function that returns 1 if the input integer
 *is a prime number, otherwise return 0.
 *@n: number passed
 *Return: function to check
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (CheckPrime(n, n / 2));
}
