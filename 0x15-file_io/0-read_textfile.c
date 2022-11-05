#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: pointer to the name of the file
 * @letters: number of letters printed
 * Return: number of letters printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int f;
ssize_t nrd, nwr;
char *buffer;

if (!filename)
	return (0);

f = open(filename, O_RDONLY);

if (f == -1)
	return (0);

buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);

nrd = read(f, buffer, letters);
nwr = write(STDOUT_FILENO, buffer, nrd);

close(f);

return (nwr);
}
