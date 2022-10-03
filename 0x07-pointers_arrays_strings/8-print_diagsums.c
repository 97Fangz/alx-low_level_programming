#include "main.h"
#include <stdio.h>

/*
 * print_diagsums - print additions of the two diagonals
 * @a: source matrix
 * @size: size of two dimensinal matrix
 * Return: chessboard
 */

void print_diagsums(int *a, int size)
{
int a_, b, c, d, dg1 = 0, dg2 = 0;

for (a_ = 0; a_ <= size; a_++)
{
c = (size + 1) * a_;
dg1 += *(a + c);
}
for (b = 1; b <= size; b++)
{
d = (size - 1) * b;
dg2 += *(a + d);
}
printf("%d, %d\n", dg1, dg2);
}
