#include "main.h"

/**
 * leet -Entry point
 * description: Encode string
 * @n: Character
 * Return: Return Character Success
 */

char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
