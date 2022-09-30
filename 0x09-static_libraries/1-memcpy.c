#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
