#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 * main -Entry point for copy function
 * @argc: Number of arguments
 * @argv: Strings of arguments
 * Return: Return 0 Success
 */
int main(int argc, char *argv[])
{
	char b[BUFFER_SIZE], *file_from, *file_to;
	ssize_t r_letters, w_letters;
	int fd_from, fd_to;
/*Checks for number of argument provided*/
	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (access(file_from, R_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}
/*Copy content from file_from to file_to*/
	while ((r_letters = read(fd_from, b, BUFFER_SIZE)) > 0)
	{
		w_letters = write(fd_to, b, r_letters);
		if (w_letters == -1)
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r_letters == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
		exit(99);
	}
/*Close file descriptors*/
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
