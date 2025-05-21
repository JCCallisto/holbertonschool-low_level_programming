#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings to be passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(stringArgs, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(stringArgs);
	printf("\n");
}
