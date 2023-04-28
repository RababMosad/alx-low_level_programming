#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
