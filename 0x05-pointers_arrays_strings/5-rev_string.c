#include "main.h"

/**
 * _strlen - swaps the values of two integers
 * @s: input string
 * Return: lenngth of spring
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
return (i);
}

/**
 * rev_string - prints string in reverse
 * @s: string input
 * Return: nothing
 */

void rev_string(char *s)
{
char today;
int i = _strlen(s);
int j = 0;

while (j < i / 2)
{
today = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = today;
j++;
}
}
