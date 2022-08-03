#include "main.h"

/**
 * alloc_grid - prints a grid of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: grid.
 */

int **alloc_grid(int width, int height)
{
  int x;
  int y;
  int **z;

  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }

  z = malloc(sizeof(int *) * height);

  if (z == NULL)
    {
      return (NULL);
    }

  for (x = 0 ; x < height ; x++)
    {
      z[x] = malloc(sizeof(int) * width);
	if (z[x] == NULL)
	  {
	   for (x = x - 1 ; x >= 0 ; x--)
	     {
	      free(z[x]);
	     }
	   free(z);
	   return (NULL);
	  }
    }
  for (x = 0 ; y < width ; y++)
    {
      z[x][y] = 0;
    }
  return (z);
}
