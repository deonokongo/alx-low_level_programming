#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new_list node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new_list node
 * @n: value of the new_list node
 * Return: the address of the new_list node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_list;
	dlistint_t *head;
	unsigned int i;

	new_list = NULL;
	if (idx == 0)
		new_list = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_list = add_dnodeint_end(h, n);
				else
				{
					new_list = malloc(sizeof(dlistint_t));
					if (new_list != NULL)
					{
						new_list->n = n;
						new_list->next = head->next;
						new_list->prev = head;
						head->next->prev = new_list;
						head->next = new_list;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (new_list);
}
