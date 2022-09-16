#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * return: nothing
 */

void times_table(void)
{
int i, j;


for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
printf("%2d", i * j);
if (i != 9 && j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
