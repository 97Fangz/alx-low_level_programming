#include "function_pointers.h"

/**
 * print_name - outputs a name
 * @name: to be printed
 * @f: pointer to name
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
