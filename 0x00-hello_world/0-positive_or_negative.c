#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Entry Point
 * description: program validates the input
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
printf("%d is positive\n");
if(n==0)
printf("%d is zero\n");
if(n<0)
prinf("%d is negative\n");

return (0);
}
