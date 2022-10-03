#include "main.h"

/**
 * _strncat - concentrates two strings
 * @dest: string to append to
 * @src: this string
 * @n: at most characters to copy from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *appE = dest;

while (*dest)
dest++;

while (*src && (i < n))
	*dest++ = *src++;
i++;
*dest = '\0';

return (appE);
}
