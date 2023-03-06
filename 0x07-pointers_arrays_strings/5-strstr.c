#include "main.h"

/**
 * _strstr -Entry point
 * description: locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: Return substring Success
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	for (; needle[i] != '\0'; i++)
	{
		if (needle[i] == haystack[i])
		{
			return (needle);
		}
	}
	return ('\0');
}
