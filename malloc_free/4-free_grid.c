#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * @grid: pointeur
 * @height: variable
 *
 * Return: pointeur if success
*/
void free_grid(int **grid, int height)
{
	int index = 0;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
