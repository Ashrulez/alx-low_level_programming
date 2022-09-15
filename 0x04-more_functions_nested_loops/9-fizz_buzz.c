#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 *        followed by a new line.
 *        But for multiples of three print Fizz instead of the number
 *        and for the multiples of five print Buzz.
 *        For numbers which are multiples of
 *        both three and five print FizzBuzz.
 *
 * Return: 0
 **/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz");
				printf(" ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
