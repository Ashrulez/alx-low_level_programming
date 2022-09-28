#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 *                   natural square root of a number.
 * @n: parameter
 *
 * Return: returns the natural square root of a number
 **/

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - return square root of a number
 * @n: parameter 1
 * @x: parameter 2
 *
 * Return: the square root
 **/

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
