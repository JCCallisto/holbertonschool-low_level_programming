#ifndef _HEADER_
#define _HEADER_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct funckey - Structure to hold function pointer and format specifier
 * @spec: Format specifier character ('c', 'i', 'f', 's')
 * @f: Function pointer to printing function that takes va_list
 */

typedef struct funckey

{
    char spec;
    void (*f)(va_list);
} funckey;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
