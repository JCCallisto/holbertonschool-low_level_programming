#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 * Return: Void.
 */

void print_binary(unsigned long int n)

{
	unsigned long int mask;
	int started = 0;
	int i;

	if (n == 0)
	
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)

	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
