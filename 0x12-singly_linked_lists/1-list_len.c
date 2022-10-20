#include "lists.h"
/**
 * list_len - this function count the elements in a linked list
 * @h: pointer to list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int elementNum = 0;

	while (h != NULL)
	{
		/*if (h->str == NULL)*/
			/*break;*/
		h = h->next;
		elementNum++;
	}

	return (elementNum);
}
