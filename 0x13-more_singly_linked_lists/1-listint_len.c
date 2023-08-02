#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_len *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
