#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals
 * @a: source matrix
 * @size: size of two dimensinal matrix
 * Return: chessboard
 */

void print_diagsums(int *a, int size)
{
int i;

unsigned int s, s1;

s = 0;
s1 = 0;

for (i = 0; i < size; i++)
{
s += a[(s + size * i)];
s1 += a [(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", s, s1);
}
