#include "lists.h"
/**
 * print_list - this function print all the elements of a list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodeNumber = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodeNumber++;
	}

	return (nodeNumber);
}
