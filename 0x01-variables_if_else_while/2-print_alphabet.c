#include <stdio.h>
/**
 * main - print lower case aplhabets
 * Description: print lower case alphabets
 * REturn: Return 0 Success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++);
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
