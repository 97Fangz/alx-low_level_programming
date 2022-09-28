#include "main.h"

/**
 * _strcat - concentrates two strings
 * @dest: character one
 * @src: character two
 * Return: null
 */

char *_strcat(char *dest, char *src)
{
char *appE = dest;

while (*dest)
	dest++;
while (*src)
	*dest++ = *src++;
*dest = '\0';

return (appE);
}
