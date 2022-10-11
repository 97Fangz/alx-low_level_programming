#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * description: if it does not receive two argiuments,print Error - return 1
 * @argc: number of command line arguments
 * @argv: list of command line arguments
 * Return: 0 else 1
 */

int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
