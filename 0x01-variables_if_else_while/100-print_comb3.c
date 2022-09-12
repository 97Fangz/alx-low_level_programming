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

for (i = 58; i <= 66; i++)
{
	for (j = 59; j <= 67; j++)
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
