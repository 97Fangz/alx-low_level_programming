#include "main.h"

/**
 * count_word - count the number of words in a string
 * @s: string to evaluate
 * Return: word count
 */

 int count_word(char *s)
{
int word, i, j;
word = 0;
j = 0;

for ( i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
word = 0;
else if (word == 0)
{
word = 1;
j++;
}
}
return (j);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array else NULL
 */

char **strtow(char *str)
{
char **monday, *today;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
	len++;
words = count_word(str);
if (words == 0)
	return (NULL);

for (i = 0; i <= len; i++)
{

if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
today = (char *) malloc(sizeof(char) * (c + 1));
if (today == NULL)
return(NULL);
while (start < end)
	*today++ = str[start++];
*today = '\0';
monday[k] = today - c;
k++;
c = 0;
}
}
else if (c++ == 0)
	start = i;
}
monday[k] = NULL;

return (monday);
}
