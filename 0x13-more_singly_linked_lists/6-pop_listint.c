#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: first element pointer
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (count);
}


