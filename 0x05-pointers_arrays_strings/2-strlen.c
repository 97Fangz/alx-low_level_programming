#include "main.h"

/**
 * _strlen - returns the length of a spring
 * @s: charater input
 * Return: 0
 */

int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
