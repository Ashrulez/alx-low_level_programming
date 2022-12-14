#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: parameter 1
 * @c: parameter 2
 *
 * Return: Returns a pointer to the first occurrence
 *         of the character c in the string s,
 *         or NULL if the character is not found
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; *(s + i) ; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
