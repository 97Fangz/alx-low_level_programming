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

for (i = 48; i <= 56; i++)
{
	for (j = 49; j <= 57; j++)
	{
	if (i < j)
	{
	putchar(i);
	putchar(j);
	}
	if (i != 56 && i != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
}
putchar('\n');
return (0);
}
