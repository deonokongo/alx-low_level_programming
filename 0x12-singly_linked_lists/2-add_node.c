#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
