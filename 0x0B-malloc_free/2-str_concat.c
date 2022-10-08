#include "main.h"

/**
 * str_concat - concentrates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string else NULL
 */

char *str_concat(char *s1, char *s2)
{
char *strC;
int i, j = 0, k = 0;

if (s1 == N)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
k++;
strC = malloc(sizeof(char) * k);

if (strC == NULL)
	return (NULL);

for (i =  0; s1[i]; i++)
	strC[j++] = s1[i];
for (i = 0; s2[i]; i++)
	strC[j++] = s2[i];
return (strC);
}
