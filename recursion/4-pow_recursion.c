#include "main.h"

/**
 * _pow_recursion - Raises x to the power of y.
 * @x: Number Integer.
 * @y: Power.
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
