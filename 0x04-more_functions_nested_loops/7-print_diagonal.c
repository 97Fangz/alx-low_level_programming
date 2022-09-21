#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: character input
 * Return: 0
 */

void print_diagonal(int n)
{
int i = 0, j = 0;

if (n > 0)
{
for (; i < n; i++)
{
for (; j < i; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
	_putchar(' ');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
