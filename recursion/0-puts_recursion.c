#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string.
 * Return: On success 1.
 * On error, -1 is returned.
 */

void _puts_recursion(char *s)

{
	if (*s == 0)
	{
		putchar ('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
