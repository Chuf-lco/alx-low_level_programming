#include "main.h"

/**
 * _strncpy -Entry point
 * description: Copy string
 * @dest: Destination
 * @src: Source
 * @n: Number of values
 * Return: Return string Success
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ch = dest;/*pointer to beginnning of dest string*/

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ch);
}
