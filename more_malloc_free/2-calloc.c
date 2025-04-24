#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_calloc - Allocates memory for an array utilizing malloc.
 * @nmemb: Unsigned int type.
 * @size: Usigned int type.
 * Return: Return pointer to array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
