#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *temp = *head;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_list;

	return (new_list);
}

