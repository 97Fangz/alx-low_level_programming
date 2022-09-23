#include "main.h"

/**
 * puts2 - Prints every other chacter of a spring
 * @str: string input
 */

void puts2(char *str)
{
int ptr = 0, j = 0;

while (str[ptr] != '\0')
{
ptr++;
}
ptr -= 1;

for (; j <= ptr; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
