#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: returns copied string
 * @src: pointer to be copied
 * @n: iterate time
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
