#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - main
 * width: width of array
 * height: height of array
 * Return: pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ary;

	if (width < 1 || height < 1)
		return (NULL);

	ary = malloc(sizeof(int) * height);

	if (ary == NULL)
	{
		free(ary);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ary[i] = malloc(sizeof(int) * width);
		if (ary[i] == NULL)
		{
			for (i--; i > 0; i--)
				free(ary[i]);
			free(ary);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ary[i][j] = 0;

	return (ary);
}
