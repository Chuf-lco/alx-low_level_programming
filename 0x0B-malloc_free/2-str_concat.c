#include "main.h"
#include <stdlib.h>
/**
 * str_concat -Entry point
 * @s1: String 1
 * @s2: String 2
 * Return: Return String Success
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *final_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	final_str = (char *) malloc(len1 + len2 + 1);
	if (final_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		final_str[i] = s1[i];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		final_str[j] = s2[j];
		i++;
		j++;
	}
	final_str[i] = '\0';
	return (final_str);

}
