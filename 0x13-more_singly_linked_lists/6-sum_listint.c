#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 * @head: pointer to the first node
 * Return: sum of all the data, 0 if the list is empty
 */
int sum_listint(const listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
