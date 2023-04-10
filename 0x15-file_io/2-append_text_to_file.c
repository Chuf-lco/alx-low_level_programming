#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Function to append text
 * @filename: NAme of the file
 * @text_content: letters to be appended
 * Return: Return 1 Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;/*file to be appended*/
	ssize_t len, w_letters;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);/*write and append file permissions*/
	if (f < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
/*Append text at the end*/
		w_letters = write(f, text_content, len);
		if (w_letters != len)
		{
			close(f);
			return (-1);
		}
	}
	close(f);

	return (1);
}
