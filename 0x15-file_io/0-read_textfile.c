#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile -Readflie contents
 * @filename: File to be read
 * @letters: Values in the file
 * Return: Return write Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;/*file to be read*/
	char *a;/*Array for the content in file*/
	ssize_t r_l, p_l;/*read and print letters consecutively*/

	f = open(filename, O_RDONLY);
	if (f == -1)/*if file does not exist*/
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	a = (char *)malloc(letters + 1);
	if (a == NULL)
	{
		close(f);
		return (0);
	}
	r_l = read(f, a, letters);
	if (r_l <= 0)
	{
		free(a);
		close(f);
		return (0);
	}
	p_l = write(STDOUT_FILENO, a, r_l);
	free(a);
	close(f);
	if (p_l != r_l)
	{
		return (0);
	}
	return (r_l);
}
