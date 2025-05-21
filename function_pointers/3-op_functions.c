#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Performs addition with two integers.
 * @a: First int.
 * @b: Second int.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - Performs subtraction with two integers.
 * @a: First int.
 * @b: Second int.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - Performs multiplication with two integers.
 * @a: First int.
 * @b: Second int.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - Performs division with two integers.
 * @a: First int.
 * @b: Second int.
 * Return: The result of the division of a by b.
 */

int op_div(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Performs modulo with two integers.
 * @a: First int.
 * @b: Second int.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)

{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
