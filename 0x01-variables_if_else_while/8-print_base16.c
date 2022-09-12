#include <stdio.h>

/**
 * main - Entry Point
 * description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
int n;
int ch;

for (n = 0; n <= 10; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
