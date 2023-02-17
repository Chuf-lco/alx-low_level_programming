#include <stdio.h>
/**
 * main -Entry point
 * Description: lower case alphabets
 * REturn: Return 0 Success
 */

int main (void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
