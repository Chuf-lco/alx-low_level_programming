#include "main.h"
#include "stdlib.h"
/**
 * str_concat -Entry point
 * @s1: String
 * @s2: String
 * Return: Return string Success
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *final_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	final_str = malloc(len1 + len2 + 1);
	if (!final_str)
		return (NULL);
	for (i = 0; i < len1; i++)
		final_str[i] = s[i];
	for (i = 0; i < len2; i++)
		final_str[i + len1] = s2[i];
	final_str[len1 + len2] = '\0';
	return (final_str);
}
