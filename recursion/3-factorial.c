#include "main.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: The number to calculate the factorial.
 * Return: Integer value.
 * if n is lower than 0, function should return -1.
 * to indicate an error.
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
