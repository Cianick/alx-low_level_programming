#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *check = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		/* Check for a loop */
		if (count > 10)
		{
			if (check >= current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				break;
			}
			check = check->next;
			count--;
		}
	}

	return (count);
}
