#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -Entry point
 * @width: Parameter
 * @height: Parameter
 * Return: Return pointer Success
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (!grid)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
