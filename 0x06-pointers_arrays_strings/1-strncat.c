#include "main.h"

/**
 * _strncat -Entry point
 * Description: Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters
 * Return: Return String Success
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (n--)
	{
		if (*i++ != *src++)
		{
			return (dest);
		}
	}
	*i = '\0';

	return (dest);
}
