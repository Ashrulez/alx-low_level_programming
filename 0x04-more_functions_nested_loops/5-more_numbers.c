#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 *                from 0 to 14, followed by a new line.
 *
 * Return: 0
 **/

void more_numbers(void)
{
	char c;

	for (c = '0' ; c <= 'F' ; c++)
	{
		if (c >= '0' && c <= '9')
		{
			_putchar(c);
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
