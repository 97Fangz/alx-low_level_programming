#include<stdio.h>

/**
 * main - Entry point
 * description: sizeof print
 * Return: 0
 */

int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("size of a char: %lu bytes(s)\n", sizeof(acharacter));
printf("size of an int: %lu bytes(s)\n", sizeof(ainteger));
printf("size of a long int: %lu bytes(s)\n", sizeof(along));
printf("size of a long long int: %lu bytes(s)\n", sizeof(alonglong));
printf("size of a float: %lu bytes(s)\n", sizeof(afloat));
}
