#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string.
 * @needle: The Substring.
 * Return: Returns a pointer to the beginning of the located needle
 * or NULL if the needle is not found.
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
