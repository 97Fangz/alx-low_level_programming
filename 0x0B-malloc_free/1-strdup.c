#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - returns a pointer to a newly alllocated space in memory
 * @str: string duplicate
 * Return: a pointer to the duplicate string
 */

char *_strdup(char *str)
{
char *str2 = NULL;
unsigned int i;
int size;

if (str2 == NULL)
	return (NULL);
for (size = 0; str[size] != '\0'; size++)
	;
str2 = (char *)malloc(size + 1 * sizeof(char));
if (str2 != NULL)
{
for (i = 0; str[i] != '\0'; i++)
	str2[i] = str[i];
}
else
{
return(NULL);
}
str2[i] = '\0';
return (str2);
}
