#include "main.h"

/**
 * more_numbers - Print numbers 10 times from 0 up to 14
 * Return: 10 times of the numbers from 0 up to 14
 */

void more_numbers(void)

{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
