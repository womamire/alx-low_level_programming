/*
 * Auth: @womamire
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **twd;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	twd = malloc(sizeof(int *) * height);

	if (twd == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		twd[hgt] = malloc(sizeof(int) * width);

		if (twd[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(twd[hgt]);

			free(twd);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			twd[hgt][wid] = 0;
	}

	return (twd);
}
