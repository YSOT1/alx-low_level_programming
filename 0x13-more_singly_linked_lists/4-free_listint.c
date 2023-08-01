#include "lists.h"

/**
 * free_listint - free's a linked list
 * @head: listint_t lists to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

