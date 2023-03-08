#include "main.h"

/**
 * is_palindrome -Entry point
 * description: If a string is a palindrome
 * @s: String
 * Return: Return palindrome Success
 */

int is_palindrome(char *s)
{
	if (*s)
		return (1);
	if (s == NULL)
		return (1);
	return (0);

}
