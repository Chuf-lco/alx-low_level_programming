#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file -Entry point for append text function
 * @filename: Name of file to be appended
 * @text_content: Content to be appended
 * Return: Return 1 Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len, w_l;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w_l = write(f, text_content, len);
		if (w_l != len)
		{
			close(f);
			return (-1);
		}
	}
	close(f);

	return (1);
}
