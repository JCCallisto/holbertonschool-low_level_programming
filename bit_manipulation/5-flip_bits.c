#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 * Return: Number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor_result;
	unsigned int count = 0;
	
	xor_result = n ^ m;

	while (xor_result)
	{
		if (xor_result & 1)
		count++;

		xor_result >>= 1;
	}

	return (count);
}
