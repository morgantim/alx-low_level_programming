#include "lists.h"
/**
 * add_nodeint_end - this function adds a new node at the beginning
 * @head: pointer to list
 * @n: integer of the new node
 * Return: address of the new element or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head != NULL)
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
