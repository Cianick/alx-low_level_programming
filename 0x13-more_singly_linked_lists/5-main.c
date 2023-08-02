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
	listint_t *node;

	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 5);

	node = get_nodeint(head, 1);
	if (node)
		printf("Node at index 1: %d\n", node->n);
	else
		printf("Node not found\n");

	node = get_nodeint(head, 10);
	if (node)
		printf("Node at index 10: %d\n", node->n);
	else
		printf("Node not found\n");

	return (0);
}
