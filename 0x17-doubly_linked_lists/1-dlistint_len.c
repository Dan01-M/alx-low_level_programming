#include "lists.h"

/**
 * dlistint_len - Write a function that returns the number of elemnts.
 *
 * @h: head of the list allocated.
 * Return: the number of nodes if not Null.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
