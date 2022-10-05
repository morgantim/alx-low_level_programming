#include "main.h"
#include <stdlib.h>
/**
 * free_grid - this function concatenate two strings
 *
 * @grid: 2 dimensional array to free
 * @height: height
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
