#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: parameter 1
 * @size: parameter 2
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
