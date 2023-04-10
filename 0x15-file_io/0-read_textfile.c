#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Read content of a file
 * @filename: Name of file to be read
 * @letters: Values in the file
 * Return: Return write Success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;/*file to be opened*/
	char *b;/*array for the letters*/
	ssize_t r_letters, p_letters;/*read and printed letters*/

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	b = (char *)malloc(letters + 1);
	if (b == NULL)
	{
		close(f);
		return (0);
	}
	r_letters = read(f, b, letters);
	if (r_letters <= 0)
	{
		free(b);
		close(f);
		return (0);
	}
	p_letters = write(STDOUT_FILENO, b, r_letters);
	free(b);
	close(f);
	if (p_letters != r_letters)
	{
		return (0);
	}
	return (r_letters);
}
