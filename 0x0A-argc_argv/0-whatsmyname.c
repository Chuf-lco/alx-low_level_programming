#include <stdio.h>

/**
 * main -Entry point
 * @argc: Length
 * @argv: Array
 * Return: Return 0 Success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
