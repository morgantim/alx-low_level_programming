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
 * add_node - this function adds a new node at the beginning
 * @head: pointer to list
 * @str: string to duplicate
 * Return: address of the new element or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = (list_t *) malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
