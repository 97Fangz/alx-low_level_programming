#include "function_pointers.h"

/**
 * int_index - looks for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: poiter to the function to be used
 * Return: index of the first element for the cmp function
 * else if no elements matches -1 else return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
if (size <= 0)
	return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]))
	return (i);
}
return (-1);
}
