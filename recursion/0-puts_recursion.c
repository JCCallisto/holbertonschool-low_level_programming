#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string.
 * Return: On success 1.
 * On error, -1 is returned.
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	_puts_recursion(s + 1);
}
