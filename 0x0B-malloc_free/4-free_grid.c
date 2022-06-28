#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function for free
 *@grid: integer value
 *@height: heighnt value
 *Return: something
 */
void free_grid(int **grid, int height)
{
int j;
while (j < height)
{
free(grid[j]);
j++;
}
free(grid);
}
