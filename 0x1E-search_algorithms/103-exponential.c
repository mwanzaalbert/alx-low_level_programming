#include "search_algos.h"

/**
 * binary_search_2 - performs a binary search on a subarray
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int binary_search_2(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches in a sorted array using exponential search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL || size == 0)
		return (-1);

	/* Finding the range for binary search */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Call binary search for the found range */
	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_2(array, low, high, value));
}
