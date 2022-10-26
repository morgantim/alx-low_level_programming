#include "lists.h"
/**
 * free_list - this function frees a list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
