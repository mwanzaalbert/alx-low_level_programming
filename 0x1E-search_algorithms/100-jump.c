#include <math.h>
#include "search_algos.h"

/**
 * min - returns the smaller of two values
 * @a: first value
 * @b: second value
 * Return: the smaller value
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * jump_search - searches value in a sorted array using jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, min(step, size) - 1);

	for (i = prev; i < min(step, size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
