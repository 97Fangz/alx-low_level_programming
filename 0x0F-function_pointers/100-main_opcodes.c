#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes itself
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the program
 * Return: 0
 */

int main(int argc, char *argv[])
{
int bytes, i;
char *ar;

if (argc != 2)
{
if (argc != 2)
	exit(1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}
ar = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", ar[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}
