#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: checks for needle
 * @needle: subsring to find in haystack
 * Return: pointer to the beginning of needle
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

while (haystack[i])
{
	while (needle[j] && (haystack[i] == needle[0]))
	{
	if (haystack[i + j] == needle[j])
		j++;
	else
		break;
	}
	if (needle[j])
	{
	i++;
	j = 0;
	}
	return (haystack + i);
}
return (0);
}
