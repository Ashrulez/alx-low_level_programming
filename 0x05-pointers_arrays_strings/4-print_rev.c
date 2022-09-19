#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse,
 *             followed by a new line.
 * @s: parameter
 *
 * Return: 0
 **/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
