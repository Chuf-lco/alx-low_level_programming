#include "main.h"

/**
 * _strlen_recursion -Entry point
 * description: Return length of string
 * @s: Parameter
 * Return: Return length Success
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
