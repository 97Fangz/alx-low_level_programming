#include <stdio.h>

/**
 * main Entry Point
 * description: all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 7; i++)
{
	for (j = 1; j <= 8; j++)
	{
	if (i < j)
	{
	putchar(i);
	putchar(j);
	}
	if(i < )
	{
	putchar(',');
	putchar(' ');
	}
	}
}
putchar('\n');
return (0);
}
