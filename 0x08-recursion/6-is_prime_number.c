#include "main.h"

/**
 * is_prime - recursively divide higher divisor,skips even numrs
 * @n: input integer
 * @div: divisor
 * Return: 1 if prime else if 0, else recursive function call
 */

int is_prime(int n, int div)
{
if (n == div)
	return (1);
if (n % div == 0)
	return (0);
return (is_prime(n, div + 1));
}

/**
 * is_prime - validates if prime
 * @n: integer checked
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
int div = 3;

if (n % 2 == 0 && n < 2)
	return (0);
if (n == 2)
	return (1);

return (is_prime(n, div));
}
