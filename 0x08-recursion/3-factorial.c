#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: parameter
 *
 * Return: factorial
 **/

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
