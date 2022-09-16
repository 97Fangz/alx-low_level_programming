#include "main.h"

/**
 * _islower - check description
 * @c: - character to be checked
 * Return: nothing
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
