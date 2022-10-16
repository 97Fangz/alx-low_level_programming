#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: number of arguments pointing to the
 * character to be printed
 */

void print_char(va_list arg)
{
char development;

development = va_arg(arg, int);
printf("%c", development);
}

/**
 * print_int - prints an int
 * @arg:number of arguments pointing to
 * the integer printed
 */
void print_nt(va_list arg)
{
int n;
n = va_arg(arg, int);
printf("%d", n);
}

/**
 * print_float - prints a float
 * @arg: number of arguments pointiting 
 * to the float to be printed
 */

void print_float(va_list arg)
{
float n;

n = va_arg(arg, double);
printf("%f", n);
}

/**
 * print_string - prints string
 * @arg: list of arguments pointing
 * to the string to be printed
 */

void print_string(va_list arg)
{
char *str;

str = va_arg(arg, char *);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: string of characters representing the arguments types
 * @...: variable number of arguments to be printed
 * Description: any arguments not of type char, int, float
 * char * is ignored
 * if a string argument is null, (nil) is printed instead
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";

printer_t funcs[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
	j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}

i++;
}
printf("\n");

va_end(args);
}
