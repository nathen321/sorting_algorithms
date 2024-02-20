#include "sort.h"
/**
 * insertion_sort_list - ....
 *
 * @list: ...
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while (node->prev && node->prev->n > node->n)
		{
			node = swap_node(list, node);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap_node - ....
 *
 * @list: ...
 * @node: ...
 *
 * Return: void
 */
listint_t *swap_node(listint_t **list, listint_t *node)
{
	listint_t *back = node->prev;
	listint_t *idx = node;

	if (back->prev)
		back->prev->next = idx;
	else
		*list = idx;
	if (idx->next)
		idx->next->prev = back;
	idx->prev = back->prev;
	back->next = idx->next;
	idx->next = back;
	back->prev = idx;
	return (idx);
}
