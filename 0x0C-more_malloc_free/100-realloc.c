#include "main.h"
#include <stdlib.h>

/**
 * _relloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @ld_size: size in bytes of the allocated space for ptr;
 * @new_size: size i  bytes of the newly allocated memory\
 * block
 * Return: If new_size > old_size - ptr
 * If new_size == old_size & ptr not null - NULL
 * else pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *mem;
char *ptr_copy, *reallocate;
unsigned int index;

if (new_size == old_size)
	return (ptr);

if (ptr == NULL)
{
mem = malloc(new_size);

if (mem == NULL)
return (NULL);

return (mem);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr_copy = ptr;
mem = malloc(sizeof(*ptr_copy) * new_size);

if (mem == NULL)
{
free(ptr);
return (NULL);
}

reallocate = mem;

for (index = 0; index < old_size && index < new_size; index++)
reallocate[index] = *ptr_copy++;

free(ptr);
return (mem);
}
