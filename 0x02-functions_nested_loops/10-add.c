#include "main.h"

/**
 * add - a function that adds two integers and returns the result.
 * @a: variable parameter 1
 * @b: variable parameter 2
 *
 * Return: 0
 **/

int add(int a, int b)
{
	int result = a + b;

	_putchar(result + '0');
	return (result);
}
