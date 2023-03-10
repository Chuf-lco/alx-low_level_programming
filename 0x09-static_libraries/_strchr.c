#include "main.h"

/**
 *  * _strchr -Entry point
 *   * description: Locate character in a string
 *    * @s: String
 *     * @c: Character
 *      * Return: Return Character Success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
