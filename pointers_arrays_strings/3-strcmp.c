#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: String to compare to s2.
 * @s2: String to compare to s1.
 * Return: Same 0, Different s1 - s2.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
