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

i = n - (j + 1);

for (j = 0; j < n / 2; j++)
{
reverse = a[i];
a[i] = a[j];
a[j] = reverse;
}
}
