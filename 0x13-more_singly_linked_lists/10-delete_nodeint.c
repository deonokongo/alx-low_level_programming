#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(next_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!next_node || !(next_node->next))
			return (-1);
		next_node = next_node->next;
		i++;
	}


	current = next_node->next;
	next_node->next = current->next;
	free(current);

	return (1);
}

