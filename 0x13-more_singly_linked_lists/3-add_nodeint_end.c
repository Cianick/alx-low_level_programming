#include "lists.h"

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer of the first node
 * @n: integer to add to the list
 * Return: pointer to the new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
