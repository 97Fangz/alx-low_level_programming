#include <stdio.h>
#include "main.h"

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
if (i == 0)
	printf("%d", a[i]);
else
printf("%d", a[i]);
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
