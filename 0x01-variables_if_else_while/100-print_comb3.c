#include <stdio.h>

/**
 * main - Entry Point
 * description: all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 8; i++)
{
	for (j = 1; j <= 9; j++)
	{
	if (i < j)
	{
	putchar(i);
	putchar(j);
	}
	if (i <= 8 && i <= 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
}
putchar('\n');
return (0);
}
