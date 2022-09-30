#include "main.h"

/**
 * wildcmp - compares 2 strings, returns 1 if considered 
 * identical else 0
 * @s1: string checked
 * @s2: string with the wild card
 * Return: 1 if true else 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0'  && *s2 == '\0')
	return (1);
if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));

if (*s2 == '*')
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	return (0);
if (wildcmp (s1, s2 + 1) || wildcmp (s1 + 1, s2))
	return (1);
}
return (0);
}
