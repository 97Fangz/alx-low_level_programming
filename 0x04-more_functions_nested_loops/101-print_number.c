#include "main.h"

/**
 * print_number - prints an integer
 * @n: character to be checked
 * Return: nothing
 */

void print_number(int n)
{
unsigned int nuM = n;

if (n < 0)
{
_putchar('-');
nuM = -nuM;
}

if ((nuM / 10) > 0)
		print_number(nuM /10);
		_putchar((nuM % 10) + '0');
	}
