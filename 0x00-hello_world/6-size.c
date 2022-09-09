#include<stdio.h>

/**
 * main - Entry point
 * description: sizeof print
 * Return: 0
 */

int main (void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;

printf("size of achar: %lu bytes(s)\n",sizeof(acharacter));
printf("size of aint: %lu bytes(s)\n",sizeof(ainteger));
printf("size of along: %lu bytes(s)\n",sizeof(along));
printf("size of along2: %lu bytes(s)\n",sizeof(alonglong));
printf("size of afloat: %lu bytes(s)\n",sizeof(afloat));
}
