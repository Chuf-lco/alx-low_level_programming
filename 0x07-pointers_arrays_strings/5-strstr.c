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
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
