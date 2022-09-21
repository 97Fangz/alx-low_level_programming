#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * description: print numbers from 1 to 100
 * for multiples of three print Fizz
 * for multiples of five print Buzz
 * for both print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
	printf("%s", f);
	}
	else if (i % 5 == 0)
	{
	printf("%s", b);
	}
	else if (i % 3 == 0 && i% 5 == 0)
	{
	printf("%s", fb);
	}
	else
	{
	printf("%d", i);
	}
	if (i != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
