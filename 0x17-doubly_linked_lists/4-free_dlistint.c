#include "lists.h"
/**
* free_dlistint - function Write a function that frees a dlistint_t list.
* @head: pointer to first node of doubly linked list
*
* Return: 0 (success)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temph = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temph = head;
		head = head->next;
		free(temph);
	}
	free(head);
}
