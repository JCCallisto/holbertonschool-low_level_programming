#include "main.h"

/**
 * _strcat - Concatenates string with n bytes from another string.
 * @dest: Destination.
 * @src: Source.
 * @n: Bytes to be copied.
 * Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}


