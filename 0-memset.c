#include "main.h"

/**
 * _memset -fills memory with a constant byte
 * @s: string input
 * @b: constant byte
 * @n: length of the buffer
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int size = 0;

while (size < n)
{
*(s + size) = b;
size++;
}
return (s);
}
