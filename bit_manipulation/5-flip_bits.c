#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor_result;
	unsigned int count = 0;

	/* XOR the two numbers to find differing bits */
	xor_result = n ^ m;

	/* Count the number of 1s in the XOR result */
	while (xor_result)
	{
		/* If the least significant bit is 1, increment count */
		if (xor_result & 1)
			count++;

		/* Shift right to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}
