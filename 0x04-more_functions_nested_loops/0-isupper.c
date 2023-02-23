#include "main.h"

/**
 * _isupper -Entry point
 * description: Checks for uppercase
 * @c: Uppercase character
 * Return: Return 0 Success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
