#include "main.h"

/**
 * more_numbers - prints ten times the numbers
 * Return: nothing
 */

void more_numbers(void)
{
int a, b;

for (; a < 10; a++)
{
for (b = 0; b < 14; b++)
{
if (b > 9)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10 +'0');
}
_putchar('\n');
}
}

