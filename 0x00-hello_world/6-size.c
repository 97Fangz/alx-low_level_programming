#include<stdio.h>

/**
 * main - Entry point
 * description: sizeof print
 *  Return: 0
 */

int main (void)
{
char achar;
int aint;
long along;
long long along2;
float afloat;

printf("size of achar: %lu bytes(s)\n",sizeof(achar));
printf("size of aint: %lu bytes(s)\n",sizeof(aint));
printf("size of along: %lu bytes(s)\n",sizeof(along));
printf("size of along2: %lu bytes(s)\n",sizeof(along2));
printf("size of afloat: %lu bytes(s)\n",sizeof(afloat));
}
