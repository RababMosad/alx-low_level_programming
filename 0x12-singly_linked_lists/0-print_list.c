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
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
