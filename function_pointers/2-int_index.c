#include "function_pointers.h"

/**
 * int_index - Search for an integer.
 * @array: The array.
 * @size: The number of elements within the array.
 * @cmp: Pointer to the function to be utilized to compare values.
 * Return: Returns the index of the first element
 * for which the cmp function does not return to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
