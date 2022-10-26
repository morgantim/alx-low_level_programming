#include "lists.h"
/**
 * pop_listint - this function pop a list
 * @head: pointer to list
 * Return: the data in head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
