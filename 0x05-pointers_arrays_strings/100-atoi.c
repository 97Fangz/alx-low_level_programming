#include "main.h"

/**
 * _atoi - converts string to integers
 * @s: string passed to the fuction
 * Return: integer
 */

int _atoi(char *s)
{
int i = 1;
unsigned int j = 0;

do {
if (*s == '-')
	i *= -1;

else if (*s >= '0' && *s <= '9')
	j = (j * 10) + (*s -'0');
else if (j >0)
	break;
} while (*s++);

return (j * i);
}
