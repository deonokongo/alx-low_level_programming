#include "lists.h"
#include<string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node
 * @str: pointer strig
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list_n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	list_n = malloc(sizeof(list_t));
	if (!list_n)
		return (NULL);

	list_n->str = strdup(str);
	list_n->len = len;
	list_n->next = NULL;

	if (*head == NULL)
	{
		*head = list_n;
		return (list_n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = list_n;

	return (list_n);
}

