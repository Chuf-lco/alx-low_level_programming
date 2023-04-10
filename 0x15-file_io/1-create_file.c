#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creating a file
 * @filename: Name of created file
 * @text_content: Sring
 * Return: Return 1 Success
 */
int create_file(const char *filename, char *text_content)
{
	int f;/*file to be created*/
	ssize_t len;/*stores length of text_content*/

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
