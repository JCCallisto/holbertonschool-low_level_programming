#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: Length of @s.
 */

size_t _strlen(const char *s)

{
	size_t length = 0;

	while (*s++);
	length++;
	return (length);
}
