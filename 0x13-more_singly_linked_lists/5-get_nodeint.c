#include "lists.h"

/**
 * get_nodeint - returns the nth node of a listint_t list
 * @head: pointer to the first node
 * @index: index of the node to return
 * Return: pointer to the nth node or NULL if it failed
 */
listint_t *get_nodeint(const listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = (listint_t *)head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}
