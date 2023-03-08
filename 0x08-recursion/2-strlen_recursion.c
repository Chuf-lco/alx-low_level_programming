#include "main.h"

/**
 * _strlen_recursion -Entry point
 * description: Return length of string
 * @s: Parameter
 * Return: Return length Success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s++);
	}
	return (s);
}
