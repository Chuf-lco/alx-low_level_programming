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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	*dest = '\0';

	return (ch);
}
