#include "main.h"

/**
 * string_toupper - main entry point
 * @s: integer one
 * Return: address of s
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
return (s);
}
