#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments that it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
