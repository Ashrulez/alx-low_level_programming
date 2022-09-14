#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 **/

void print_alphabet_x10(void)
{
	int i=0;
	char letter;

	while (i < 10)
	{

		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
