#include "lists.h"
/**
 * sum_listint - this function adds every n data of evety node
 * @head: pointer to list
 * Return: sum of all n data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
