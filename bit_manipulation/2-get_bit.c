#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is too large for the data type */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift the bit at index to position 0 and mask with 1 */
	return ((n >> index) & 1);
}
