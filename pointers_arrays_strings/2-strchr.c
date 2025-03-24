#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string.
 * @c: The Character.
 * Return: pointer to the first occurrence of c in the s,
 * or NULL if c is not found
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
