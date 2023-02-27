#include "main.h"

/**
 * rev_string -Entry point
 * description: Reverse a string
 * @s: String character
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = (i - 1); i >=0; i--)
	{
		return (s[i]);
	}
}
