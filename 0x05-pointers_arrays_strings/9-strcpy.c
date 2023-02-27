#include "main.h"

/**
 * _strcpy -Entry point
 * description: Copy string
 * @dest: Pointer
 * @src: Pointer
 * Return: Return String Success
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
