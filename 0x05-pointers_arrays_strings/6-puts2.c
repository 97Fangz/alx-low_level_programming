#include "main.h"

/**
 * puts2 - Prints string in even intervals
 * @s: string input
 */

void puts2(char *s)
{
int i = 0;

while (s[i])
{
if (i % 2 == 0)
{
_putchar(s[i]);
i++;
}
}
_putchar('\n');
}
