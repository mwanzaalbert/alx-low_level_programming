#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * linear_skip - searches value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer on first node where value located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *prev;

	if (!list)
		return (NULL);

	node = list;
	while (node->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				node->express->index, node->express->n);
		if (node->express->n >= value)
			break;
		node = node->express;
	}

	if (!node->express)
	{
		prev = node;
		while (node->next)
			node = node->next;
	}
	else
	{
		prev = node;
		node = node->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->index,
			node->index);

	for (; prev != node->next; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index,
			       prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
