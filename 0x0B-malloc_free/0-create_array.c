#include"main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * create_array - creates array of chars initialize
 * it with c
 * @size: size of array
 * @c: array initializer
 * Return: pointer to array or NULL if size is zero
 */

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;

if (size != 0)
{
array = (char *) malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size ; i++)
	array[i] = c;
}
}

return (array);
}
