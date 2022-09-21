#include "main.h"

/**
 * print_number - prints an integer
 * @n: character to be checked
 * Return: nothing
 */

void print_number(int n)
{
unsigned int nuM;

if (n < 0)
{
nuM = -n;
_putchar('-');
}
else
{
nuM = n;
}
if (nuM / 10)
{
print_number(nuM / 10);
}

_putchar((nuM % 10) + '0');
}
