#include <stdio.h>
/**
 * main - Entry point
 *
 * print the single numbers of base 10 but with putchar()
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
