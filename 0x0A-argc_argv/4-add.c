#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * description: if no number is passed to the program print 0
 * print Error if one of the number contains symbols that are not digits - return 1
 * @argc: number of commandline arguments
 * @argv: list of command line arguments
 * Return: 0 else 1
 */

 int main(int argc, char ** argv)
 {
	 int sum = 0, i, j;
	 char *ptr;

 if (argc > 1)
 {
 for (i = 1; i < argc; i++)
 {
 j = strtol(argv[i], &ptr, 10);
 if (!*ptr)
	 sum += j;
 else
 {
 printf("Error\n");
 return (1);
 }
 }
 }
 printf("%d\n", sum);
 return (0);
 }
