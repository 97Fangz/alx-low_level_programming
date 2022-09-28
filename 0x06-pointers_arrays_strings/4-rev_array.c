#include "main.h"

void reverse_array(int *a, int n)
{
int reverse, i, j;

i = n - 1;

for (j = 0; j < n / 2; j++)
{
reverse = a[i];
a[i] = a[j];
a[i--] = reverse;
}
}
