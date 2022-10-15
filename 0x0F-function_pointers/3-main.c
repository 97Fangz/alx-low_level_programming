#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument
 * @argv: array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i.j;
int (*o)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

o = get_op_func(argv[2]);
if ((argv[2][1] != '\0') || (o == NULL))
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", o(a, b));

return (0);
}
