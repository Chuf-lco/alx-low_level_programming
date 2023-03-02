#include "main.h"

/**
 * cap_string -Entry point
 * description: Capitalize words
 * @str: array
 * Return: Return Uppercase
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		if (word_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++
	}
	return (str);
}

/**
 * word_separator -Entry point
 * description: Word separators
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */


int word_separator(char c)
{
	int i = 0;

	char separator[13] = { ' ', '/t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == separator[i])
		{
			return (1);
		}
	}
	return (0);
}
