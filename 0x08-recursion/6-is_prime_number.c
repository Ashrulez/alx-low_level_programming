#include "main.h"

/**
 * is_prime_number - a function that returns 1
 *                   if the input integer is a prime number,
 *                   otherwise return 0.
 * @n: parameter 1
 *
 * Return: prime number
 **/

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, start));
}

/**
 * is_prime - returns 1 if number is prime
 * @n: parameter 1
 * @start: parameter 2
 *
 * Return: 1 if n is prime, otherwise 0
 **/

int is_prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	return (is_prime(n, start - 1));
}
