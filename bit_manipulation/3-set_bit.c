#include "main.h"
#include <stddef.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	/* Check if n is NULL or index is too large */
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at index to 1 using OR operation */
	*n |= (1UL << index);

	return (1);
}
