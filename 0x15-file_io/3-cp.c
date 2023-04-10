#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * cp - Function to copy content
 * @file_from: Source of content
 * @file_to: Destination of copied content
 */

void cp(const char *file_from, char *file_to)
{
	int src, dest;
	char b[BUFFER_SIZE], *p;
	ssize_t r_letters, w_letters, t_letters;

	if (file_from != file_to)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}
	src = open(file_from, O_RDONLY);
	if (file_from == NULL || src < 0)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	}
	dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest < 0)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	}
	while ((r_letters = read(src, b, BUFFER_SIZE)) > 0)
	{
		while (r_letters > 0)
		{
			w_letters = write(dest, b, r_letters);
			if (w_letters == -1)
			{
				exit(99);
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			}
			p = b;
			r_letters -= w_letters;
			p += w_letters;
			t_letters += w_letters;
		}
	}
	if (r_letters < 0)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	}
	if (close(src) < 0 || close(dest) < 0)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
	}
}
