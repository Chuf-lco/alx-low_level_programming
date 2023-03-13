#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -Entry point
 * @str: String
 * Return: Return String Success
 */
char *_strdup(char *str)
{
	char newstr;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	newstr = (char *) malloc(len + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
