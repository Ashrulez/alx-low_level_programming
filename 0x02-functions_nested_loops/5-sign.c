#include "main.h"

/**
 * print_sign - Entry point
 * @n: parameter
 *
 * a function that prints the sign of a number.
 *
 * Return: 0
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
		return (0);
}
