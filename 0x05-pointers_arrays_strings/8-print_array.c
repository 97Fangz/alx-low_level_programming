#include"main.h"

/**
 * print_array - prints n elements of an array
 * @a: first integer
 * @n: second integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;

for (; i < n; i++)
{
_putchar(a[i]);
if (i < n - 1)
	_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
