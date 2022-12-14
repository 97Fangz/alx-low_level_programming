#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit value is to be obtained from an
 * @index: indices start at 0
 * Return: -1 on error else value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
		return (-1);
if ((n & (1 << index)) == 0)
	return (0);

return (1);
}
