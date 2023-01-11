#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2-D grid created by alloc_grid()
  * @grid: pointer to 2-D array
  * @height: 2-D size
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
