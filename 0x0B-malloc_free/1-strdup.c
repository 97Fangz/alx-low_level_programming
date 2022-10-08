#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly alllocated space in memory
 * @str: string duplicate
 * Return: a pointer to the duplicate string
 */

char *_strdup(char *str)
{
char *str2 = NULL;
int i, j;

if (str == NULL)
	return (NULL);
for (i = 0; str[i]; i++)
	j++;
str2 =(char *) malloc((j + 1) * sizeof(char));
if (str2 == NULL)
{
	return (NULL);
for (i = 0; str[i]; i++)
	str2[i] = str[i];
}
str2[j] = '\0';
return (str2);
}
