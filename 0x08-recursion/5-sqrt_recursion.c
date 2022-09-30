#include "main.h"

/**
 * sqrt_check - recursively checks the square of n
 * @n: character input
 * @inpt: increment square root of n
 * Return: 0
 */
int sqrt_check(int n, int inpt)
{
if (inpt * inpt == n)
	return (inpt);
else if (inpt * inpt > n)
	return (-1);
return (sqrt_check(n, inpt + 1));
}

/**
 * _sqrt_recursion -returns the natural square of a number
 * @n: input integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
return (sqrt_check(n, 0));
}
