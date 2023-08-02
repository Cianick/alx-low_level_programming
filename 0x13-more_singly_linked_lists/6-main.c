#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - entry point for testing the linked list functions
 * Return: Always 0
 */
int main(void)
{
	listint_t *head = NULL;
	int sum;

	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 5);

	sum = sum_listint(head);
	printf("Sum of list: %d\n", sum);

	return (0);
}
