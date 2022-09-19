#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: 0
 **/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
