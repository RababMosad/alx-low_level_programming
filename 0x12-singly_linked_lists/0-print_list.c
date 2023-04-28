#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @string: the string whose length to check
 *
 * Return:integer length of string
 */
int _strlen(char string)
{
	int i = 0;

	if (!string)
		return (0);
	while (string++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked lists
 * @node: pointer to first node
 *
 * Return:size of list
 */
size_t print_list(const list_t *node)
{
	size_t i = 0;

	while (node)
	{
		printf("[%d] %s\n", _strlen(node->str), node->str ? node->str : "(nil)");
		node = node->next;
		i++;
	}
	return (i);
}
