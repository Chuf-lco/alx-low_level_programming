#include "main.h"

/**
 * rev_string -Entry point
 * description: Reverse a string
 * @s: String character
 */

void rev_string(char *s)
{
	char a = s[0];/*string*/
	int i = 0;/*length*/
	int j; /*temporary hold of the string*/

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		a = s[j];
		s[j] = s[i];
		s[i] = a;
	}
}
