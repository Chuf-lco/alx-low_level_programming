#include "main.h"

int check_str(char *s1, char *s2, int i, int j);

/**
 * wildcmp -Entry point
 * description: Compare strings
 * @s1: String 1
 * @s2: String 2
 * Return: Return identical Success
 */

int wildcmp(char *s1, char *s2)
{
	return (check_str(s1, s2, 0, 0));
}

/**
 * check_str -Entry point
 * description: Check strings
 * @s1: string 1
 * @s2: string 2
 * @i: index for string
 * @j: index for special character
 * Return: Return 0
 */
int check_str(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (check_str(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check_str(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check_str(s1, s2, i + 1, j) || check_str(s1, s2, i, j + 1));
	return (0);
}
