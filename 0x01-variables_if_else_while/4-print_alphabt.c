#include<stdio.h>

/**
 * main - Entry Point
 * description: prints all letters except 'q' and 'e'
 * Return: 0
 */

int main(void)
{
	int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
	if (alph == 'e'  || alph == 'q')
	{
		continue;
	}
putchar(alph);
}
putchar('\n');
return (0);
}
