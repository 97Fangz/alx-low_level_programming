#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concentrate to s1
 * Return: NULL else if function succeeds return pointer to the concentrated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *test;
unsigned int len = n, index;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

for (index = 0; s1[index]; index++)
	len++;

test = malloc(sizeof(char) * (len + 1));

if (concat == NULL)
	return (NULL);

len = 0;

for (index = 0; s1[index]; index++)
	test[len++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
	test[len++] = s2[index];
test[len] = '\0';

return (test);
}
