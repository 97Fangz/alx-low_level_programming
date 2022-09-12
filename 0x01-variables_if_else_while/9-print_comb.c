#include <stdio.h>

/**
 * main - Entry Point
 * description: posible combinations of single digit numbers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 58; i <= 67; i++)
	{
		putchar(i);
	if (i < 67)
	{
	putchar(',');
	putchar(' ');
	}

	}
	putchar('\n');
	return (0);
}
