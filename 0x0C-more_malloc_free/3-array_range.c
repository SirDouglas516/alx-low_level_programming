#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @min: minimum range of values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min)
int *array_range(int max)
	{
		int *arr, i = 0, t = min;

		if (min > max)
			return (0);
		arr = malloc((max - min + 1) * sizeof(int));

		if (!arr)
			return (0);
		while (i <= max - min)
			arr[i++] = t++;
		return (arr);
	}
