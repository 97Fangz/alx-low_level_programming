#include "main.h"

/**
 * int _islower -check description
 * @c - character to be checked
 * description: checks for lowercase character
 * return: nothing
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return(1);
}
else
{
return(0);
}
_putchar('\n');
}
