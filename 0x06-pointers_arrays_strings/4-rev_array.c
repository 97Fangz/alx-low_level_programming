#include "main.h"

/**
 * reverse_array - entry point
 * description: reverses the content of an array
 * @a: first character
 * @n: second character
 * Return: 0
 */

void reverse_array(int *a, int n)
{
int reverse, i, j;
j = n - 1;

for (i = 0; i < n / 2; i++)
{
reverse = a[i];
a[i] = a[j];
a[j--] = reverse;
}
}
