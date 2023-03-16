#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -Entry point
 * @s1: String 1
 * @s2: String 2
 * @n: Size of String 2 in Concatenated string
 * Return: Return String Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = 0, len2 = 0, i = 0, j = 0, len3;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	len3 = len1 + len2 + 1;
	concat_str = malloc(len3);
	if (!concat_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
