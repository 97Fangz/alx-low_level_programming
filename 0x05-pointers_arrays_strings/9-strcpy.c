#include "main.h"

/**
 * _strcpy - entry point
 * @dest: first integer
 * @src: second integer
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
int i = 0, j = 0;

while (src[i] != '\0')
{
i++;
}

for (; j < i; j++)
{
dest[j] = src[j];
}
dest [j] = '\0';

return (dest);
}
