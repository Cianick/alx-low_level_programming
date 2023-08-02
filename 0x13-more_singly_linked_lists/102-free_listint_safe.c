#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (current >= next)
		{
			*h = NULL;
			break;
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
