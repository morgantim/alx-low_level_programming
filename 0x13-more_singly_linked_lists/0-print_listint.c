#include "lists.h"
/**
 * print_listint - this function print all the elements of a int list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodeNumber = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeNumber++;
	}

	return (nodeNumber);
}
