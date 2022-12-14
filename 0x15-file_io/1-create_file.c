#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 on success else -1/
 */

int create_file(const char *filename, char *text_content)
{
int f;
int letters;
int rwr;

if (!filename)
	return (-1);

f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (f == -1)
	return (-1);

if (!text_content)
	text_content = "";

for (letters = 0; text_content[letters]; letters++)
	;

rwr = write(f, text_content, letters);

if (rwr == -1)
	return (-1);

close(f);

return (1);
}
