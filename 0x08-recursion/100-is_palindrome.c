#include "main.h"

/**
 * str_length -returns 1 if a string is a palindrome else 0
 * @s: string input
 * Return: length of sting
 */

int str_length(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + str_length(++s));
}

/**
 * check_palindrome - checks for palindrom for each left and right
 * char in string, recursively
 * @i: left index of string
 * @j: right index of string
 * @s: string
 * return: 1 if true else 0
 */

int check_palindrome(int i, int j, char *s)
{

if (i >= j)
return (1);
if (s[i] != s[j])
	return (0);
return (check_palindrome(i + 1, j - 1, s));
}

/**
 * is_palindrome - validates if palindrome is a sting
 * @s: string check
 * Return: 1 if true else 0
 */

int is_palindrome(char *s)
{
int i;

i = str_length(s) - 1;
return (check_palindrome(0, i, s));
}
