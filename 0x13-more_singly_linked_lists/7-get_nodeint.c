#include "lists.h"
/**
 * get_nodeint_at_index - this function get a index node
 * @head: pointer to list
 * @index: node that we wanna get
 * Return: node based on index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
