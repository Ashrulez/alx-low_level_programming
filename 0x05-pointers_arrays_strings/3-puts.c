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
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	_putchar(10);
	_putchar('\n');
}
