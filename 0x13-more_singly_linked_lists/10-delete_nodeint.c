#include "lists.h"
/**
 * delete_nodeint_at_index - this function removes a specific node
 * @head: pointer to list head
 * @index: index of the node to delete
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *previous;

	if (!(*head && head))
		return (-1);

	temp = *head;
	if (index > 0)
	{
		while (i < (index))
		{
			previous = temp;
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
			i++;
		}
	previous->next = temp->next;
	}

	if (index == 0)
		*head = (*head)->next;
	free(temp);
	return (1);
}
