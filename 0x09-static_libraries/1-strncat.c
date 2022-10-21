#include "main.h"

/**
 * _strncat - concatenates two strings
 *  @dest: parameter string
 *  @src: parameter string
 *  Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_size;
int i;

dest_size = i = 0;
while (*(dest + dest_size))
{
dest_size++;
}
while (*(src + i) && i < n)
{
*(dest + dest_size) = *(src + i);
dest_size++;
i++;
}
return (dest);
}
