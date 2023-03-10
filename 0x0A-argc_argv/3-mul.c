#include <stdio.h>

int  atoi(char *s);
/**
 * main -Entry point
 * @argc: value
 * @argv: array
 * Return: Return 0 Success
 */
int main(int argc, char *argv[])
{
	int a, m = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		m = m * atoi(argv[a]);
	}
	printf("%d\n", m);
	return (0);
}
