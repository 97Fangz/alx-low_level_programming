#include "main.h"

/**
 * void print_triangle - prints a triangle
 * @size: input integer
 * Return: nothing
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a,b;

for (a = 1; a <= size; a++)
{
for (b = a; b <= size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
