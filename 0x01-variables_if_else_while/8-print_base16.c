#include <stdio.h>
/**
 * main - Entry point
 *
 * Hexadecimal
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	char c;

	for (c = 0 ; c < 10 ; c++)
	{
		putchar(c + '0');
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
