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
	int count = 0;
	int s_count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' ||
				str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' ||
				str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
			s_count = 0;
		else
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && s_count == 0)
			{
				str[i] -= 32;
				s_count++;
			}
			else
			{
				s_count++;
			}
		}
	}
	return (str);
}
