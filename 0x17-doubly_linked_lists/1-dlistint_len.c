#include "lists.h"
/**
 * dlistint_len - function
 * @h: pointer to the head node of list
 *
 * Description: function that returns the number of elements in a linked list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int el = 0;

	while (h != NULL)
	{
		h = h->next;
		el++;
	}
	return (el);
}
