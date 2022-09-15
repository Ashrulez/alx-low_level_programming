#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: parameter
 *
 * Return: nothing
 **/

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1 ; a <= size ; a++)
		{
			while (b < a)
			{
				_putchar('#');
			}
			if (a == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
