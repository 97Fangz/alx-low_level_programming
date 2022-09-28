#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: 0
 */

void print_number(int n)
{
unsigned int i;

if (i < 0)
{
i = -i;
_putchar('-');
}
else
{
i = i;
}
if (i / 10)
	print_number(i / 10);

	_putchar((i % 10) + '0');
}
