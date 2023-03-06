#include "main.h"

/**
 * _memcpy -Entry point
 * description: Copie memory data
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Number of characters
 * Return: Return dest Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for  (; n != '\0'; i++)
	{
		dest[i] == src[i];
	}
	putchar('\0');

	return (dest);
}
