#include <stdio.h>

/**
 * main - checks for a digit 0 - 9
 * description: finds a prime factor
 * Return: 0
 */

int main(void)
{
long x, y;

x = 612852475143;

for (y = 2; x > y; y++)
{
while(x % y == 0)
{
x = x / y;
}
}
printf("%lu", y);
putchar('\n');
return (0);
}
