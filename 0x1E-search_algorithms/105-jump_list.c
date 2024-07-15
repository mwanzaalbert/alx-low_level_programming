#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches in a sorted list of integers using Jump search
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the 1st node where val is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev, curr;
	listint_t *node = list, *jump_node;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);
	prev = 0;

	while (node && node->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n >= value)
			break;

		prev = node->index;
		for (curr = 0; curr < jump && node->next; curr++)
			node = node->next;

		if (!node->next)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

	jump_node = list;
	while (jump_node && jump_node->index <= node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				jump_node->index, jump_node->n);
		if (jump_node->n == value)
			return (jump_node);

		jump_node = jump_node->next;
	}

	return (NULL);
}
