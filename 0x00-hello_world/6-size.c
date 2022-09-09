#include<stdio.h>

/**
 * main - Entry point
 * description: sizeof print
 * Return: 0
 */

int main(void)

{
	char chaR;
	int inT;
	long lonG;
	long long lonG_int;
	float floaT;
printf("size of a char: %lu bytes(s)\n", sizeof(chaR));
printf("size of an int: %lu bytes(s)\n", sizeof(inT));
printf("size of a long int: %lu bytes(s)\n", sizeof(lonG));
printf("size of a long long int: %lu bytes(s)\n", sizeof(lonG_int));
printf("size of a float: %lu bytes(s)\n", sizeof(floaT));
return (0);
}
