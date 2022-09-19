#include "main.h"

/**
 * print_most_numbers - prints 10 times the numbers
 * from zero to forteen
 * Return: void
 */

void print_most_numbers(void)
{

	int c;

	for (c = 0; c < 10; c++)
	{
	if (c != 2 && c != 4)
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}
