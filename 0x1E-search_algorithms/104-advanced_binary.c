#include "search_algos.h"

/**
 * recursive_binary - helper function to perform binary search
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);

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
	{
		/*  Check if this is the first occurrence */
		if (mid == low || array[mid - 1] < value)
			return (mid);
	}

	if (array[mid] >= value)
		return (recursive_binary(array, low, mid, value));

	return (recursive_binary(array, mid + 1, high, value));
}

/**
 * advanced_binary - searches in a sorted array using advanced binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
