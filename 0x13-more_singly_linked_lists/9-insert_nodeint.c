#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_list;
	listint_t *next_node = *head;

	new_list = malloc(sizeof(listint_t));
	if (!new_list || !head)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}

	for (i = 0; next_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_list->next = next_node->next;
			next_node->next = new_list;
			return (new_list);
		}
		else
			next_node = next_node->next;
	}

	return (NULL);
}

