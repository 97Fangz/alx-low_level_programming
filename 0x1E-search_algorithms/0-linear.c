#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array
 * @array: where the value is searched
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value
 * else  -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n  = 0;

	if (!array || size == 0)
		return (-1);

	while (n < size)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}

	return (-1);
}
