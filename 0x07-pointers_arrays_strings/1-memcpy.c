#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of memory copy
 * @src: copied to
 * @n: bytes copied to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);
}
return (dest);
}
