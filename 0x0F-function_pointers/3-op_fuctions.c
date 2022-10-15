#include "3-calc.h"
/**
 * op_add - evaluates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}
 /**
  * op_sub - evaluates the diference of two integers
  * @a; first integer
  * @b: srcond integer
  * Return: difference of a and b
  */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - evaluates the product of two integers
 * @a: fist integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - evaluates the division of two integers
 * @A: first integer
 * @b: second integer
 * Return: result 
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a /b);
}

/**
 * op_mod - evaluates the remainder of the division
 * of two  integers
 * @a:first integer
 * @b: second integer
 * Return: result
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
