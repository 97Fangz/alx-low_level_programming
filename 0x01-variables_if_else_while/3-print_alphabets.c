#include<stdio.h>

/**
 * main - Entry point
 * description: prints alphabet in lowercase the uppercase
 * Return: 0
 */
int main (void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);

for (alph = 'A'; alph <= 'Z'; alph++)
{
putchar(alph);
}
}
putchar('\n');
return (0);
}

