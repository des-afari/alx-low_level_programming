#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **newArr, i, j;
	
	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	newArr = (int **) malloc(sizeof(int) * height);

	if (newArr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < heightl i++)
	{
		newArr[i] = (int *) malloc(sizeof(int) * width);

		if(newArr[i] = NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(newArr[j]);
			}
			free(newArr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			newArr[i][j] = 0;
		}
	}
	return (newArr);
}
