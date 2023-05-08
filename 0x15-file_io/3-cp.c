#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_err -Entry point for Error checks
 * @i: Text to be checked
 * @err_format: Format of the error
 */
void print_err(int i, char *err_format, ...)
{
	va_list args;

	va_start(args, err_format);
	dprintf(STDERR_FILENO, err_format, args);
	va_end(args);
	exit(i);
}
/**
 * main -Entry point for copy function
 * @argc: Number of arguments
 * @argv: Strings of arguments
 * Return: Return 0 Success
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2], buffer[BUFFER_SIZE];
	int data_from, data_to;/*file descriptor from and to respectively*/
	ssize_t read_l, write_l;

	if (argc != 3)
	{
		print_err(97, "Usage: cp %s file_from file_to\n", argv[0]);
	}
	data_from = open(file_from, O_RDONLY);
	if (data_from == -1)
	{
		print_err(98, "Error: Can't read from file %s\n", file_from);
	}
	data_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (data_to == -1)
	{
		print_err(99, "Error: Can't write to %s\n", file_to);
	}
	if (chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP | S_IROTH) == -1)
	{
		print_err(99, "Error: Can't change file permissions of %s\n", file_to);
	}
	while ((read_l = read(data_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_l = write(data_to, buffer, read_l);
		if (write_l != read_l)
		{
			print_err(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (read_l == -1)
	{
		print_err(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(data_from) == -1)
	{
		print_err(100, "Error: Can't close fd %d\n", data_from);
	}
	if (close(data_to) == -1)
	{
		print_err(100, "Error: Can't close fd %d\n", data_to);
	}
	return (0);
}
