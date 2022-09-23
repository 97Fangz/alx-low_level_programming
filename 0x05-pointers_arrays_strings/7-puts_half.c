#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 * Return: length of a string
 */

void puts_half(char *str)
{
int put = 0, i, n;

while (str[put] != '\0')
	put++;

if (put % 2 == 0)
	n = put / 2;

else
	n = (put + 1) / 2;

for (i = n; i < put; i++)
	_putchar(str[i]);

_putchar('\n');
}
