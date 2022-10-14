#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: array  integer input
 * @size: size of the arrray
 * @action: pointer to the fuction
 * Return: null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
	for (i = 0; i < size; i++)
		action(array[i]);
}
