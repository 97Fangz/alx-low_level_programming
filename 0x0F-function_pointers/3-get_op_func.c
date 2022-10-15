#include "3-calc.h"

/**
 * get_op-func - pointer to fuction to select a function
 * from struct operator
 * @s: input operator
 * Return: pointer to the function given as the input
 */

int (*get_op_func(char *s))(int, int)
{
p_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
	return (ops[i].f);
i++;
}
return (NULL);
}
