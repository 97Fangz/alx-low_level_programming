#include "main.h"

/**
 * _strlen - swaps the values of two integers
 * @s: string input
 * Return: length of a string
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}

/**
 * print_rev - prints a strin in reverse
 * @s: string input
 * Return: 0
 */

void print_rev(char *s)
{
int i = _strlen(s) - 1;

while (s[i])
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
