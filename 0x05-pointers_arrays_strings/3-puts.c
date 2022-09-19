#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string,
 *         followed by a new line, to stdout.
 * @str: parameter
 *
 * Return: 0
 **/

void _puts(char *str)
{
	_putchar(*str);
	_putchar('\n');
}
