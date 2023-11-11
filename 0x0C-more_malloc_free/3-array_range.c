#include <stdlib.h>
#include "main.h"

/**
 * *array_range is a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pts;
	int a, size;

	if (min > max)
	{
		return (NULL);
        }
	size = max - min + 1;

	pts = malloc(sizeof(int) * size);

	if (pts == NULL)
	{
		return (NULL);
        }
	for (i = 0; min <= max; i++)
	{
		pts[a] = min++;
        }
	return (pts);
}
