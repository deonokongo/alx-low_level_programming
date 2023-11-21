#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linkedlist with length of elements to be printed
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}


