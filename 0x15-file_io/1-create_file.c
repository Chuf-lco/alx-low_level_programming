#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Function to create file entry point
 * @filename: Name of flie to be created
 * @text_content: Array of content in file
 * Return: Return 1 Success
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len;/*length counter for content in file*/

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (len > 0 && write(f, text_content, len) == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
