#include "lists.h"
/**
 * listint_len - this function count the elements in a linked of ints list
 * @h: pointer to list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elementNum = 0;

	while (h != NULL)
	{
		h = h->next;
		elementNum++;
	}

	return (elementNum);
}
