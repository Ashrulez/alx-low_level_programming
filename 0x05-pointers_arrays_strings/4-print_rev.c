#include <string.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 *             followed by a new line.
 * @s: parameter
 *
 * Return: 0
 **/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) ; i < 0 ; i--)
	{
		_putchar(strlen(s));
	}
}
