#include "main.h"

/**
 * print_rev - prints a strin in reverse
 * @s: character checked
 * Return: 0
 */

void print_rev(char *s)
{
int i;

for(i = 0; s[i] !=0; i++)
{
_putchar (s[--i]);
}
_putchar('\n');
}
