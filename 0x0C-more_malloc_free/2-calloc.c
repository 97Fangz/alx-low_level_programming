#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of an array of a certain # of elements
 * @nmemb: number of elements
 * @size: byte of each array element
 * Return: if nemb = 0, size = 0 - NULL else return a pointer
 * to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
char *allocate;
unsigned int index;

if (nmemb == 0 || size == 0)
	return (NULL);

mem = malloc(size * nmemb);

if (mem == NULL)
	return (NULL);

allocate = mem;

for (index = 0; index < (size * nmemb); index++)
	allocate[index] = '\0';

return (mem);
}

