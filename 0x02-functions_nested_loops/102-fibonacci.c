#include <stdio.h>

/**
* main -Entry point
* description: Print fibonacci numbers
* Return: Return 0 Success
*/

int main(void)
{
	long int i, j, sum;
	int k;

	printf("1, 2");
	for (k = 3; k <= 50; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf(", %lu", i);
	}
	printf("\n");
}
