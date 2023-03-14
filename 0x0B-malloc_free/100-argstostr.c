#include "main.h"
#include <stdlib.h>
/**
 * argstostr -Entry point
 * @ac: Parameter
 * @av: Pointer to pointer
 * Return: Return string Success
 */
char *argstostr(int ac, char **av)
{
	size_t len, postn;
	int i;
	char *concat_str, *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		while (*str != '\0')
		{
			len++;
			str++;
		}
		len++;/*1 for newline character*/
	}
	concat_str = (char *)malloc((len + 1) * sizeof(char));/*for null terminator*/
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = av[i];
		while (*str != '\0')
			concat_str[postn++] = *str++;
		concat_str[postn++] = '\n';
	}
	concat_str[len] = '\0';
	return (concat_str);

}
