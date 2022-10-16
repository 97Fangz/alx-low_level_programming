#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file: variadic_functions.h
 * description: contains prototypes for all functions
 */

#include <stdarg.h>

/**
 * struct printer - new struct type definining a printer
 * @symbol: represents sa data type
 * @print: function pointer to a function that prints a data type in alignment to symbol
 */

typedef struct printer
{
char *symbol;
void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
