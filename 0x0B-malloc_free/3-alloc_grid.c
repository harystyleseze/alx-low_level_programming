#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2D array
 * @width: input
 * @height: input
 * Return: NULL if width or height is 0 or negative
 * or if unsuccessful
 */
int **alloc_grid(int width, int height)
{
	int **gridpt;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridpt = malloc(height * sizeof(int *));
	if (gridpt == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		gridpt[i] = malloc(width * sizeof(int));
		if (gridpt[i] == NULL)
		{
			while (i >= 0)
				free(gridpt[i--]);
			free(gridpt);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			gridpt[i][j] = 0;
	}

	return (gridpt);
}
