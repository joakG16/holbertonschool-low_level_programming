#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i,j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(width * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * height);
			if (grid[i] == NULL)
			{
				for (i = 0; i < height; i++)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
