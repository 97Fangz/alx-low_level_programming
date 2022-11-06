#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: a pointer to the name of the file
 * @text_content: string to add to the end of the file
 * Return: NULL if it the function fails
 * -1 if the file doest not exixst
 * else - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int f;
int letters; 
int rwr;

if (!filename)
	return (-1);

f = open(filename, O_WRONLY | O_APPEND);

if (f == -1)
	return (-1);
if (text_content)
{
for (letters = 0; text_content[letters]; letters++)
	;

rwr = write(f, text_content, letters);

if (rwr == -1)
	return (-1);
}
close(f);

return (1);
}
