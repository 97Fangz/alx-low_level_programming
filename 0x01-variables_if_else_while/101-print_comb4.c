#include <stdio.h>

/**
 * main - Entry Point
 * description: combination of three digit numbers
 * Return: 0
 */

int main(void)
{
	int i, j, k;
for (i = 0; i <= 7; i++)
{
for (j = 1; j <= 8; j++)
{
for (k = 2; k <= 9; k++)
	if (k > j && j > i)
	{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i != 7 || j != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
}
}
putchar('\n');
return (0);
}