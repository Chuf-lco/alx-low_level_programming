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
	int i = 0;
	int j = 0;

	while (*dest != '\0')
	{
		i++;
	}

	while (j < n && *src != '\0')
	{
		*dest = *src++;
		j++;
	}
	*dest = '\0';

	return (dest);
}
