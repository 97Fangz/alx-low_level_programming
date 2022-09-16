#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * from n to 98
 * @n: character tested
 * Return: nothing
 */

void print_to_98(int n)
{
if (n >= 98)
{
for(; n >= 98; n--)
{
_putchar(n);
}
}
else if (n <= 98)
{
for (; n <= 98; n++)
{
_putchar(n);
}
}
_putchar('\n');
}
