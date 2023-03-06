#include "main.h"

/**
 * _memset -Entry point
 * decription: Fill memory with a constant byte
 * @s: Pointer
 * @b: Constant byte
 * @n: Number of characters
 * Return: Return String Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
