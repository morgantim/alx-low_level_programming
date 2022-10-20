#include "lists.h"
/**
 * _strlen - this function return the legth of a string
 * @s: value
 *
 * Return: value
 */
int _strlen(const char *s)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
/**
 * add_node_end - this function adds a new node at the beginning
 * @head: pointer to list
 * @str: string to duplicate
 * Return: address of the new element or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

	newNode = (list_t *) malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
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
