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

	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 5);
	print_listint(head);

	printf("Insert 100 at index 1\n");
	insert_nodeint_at_index(&head, 1, 100);
	print_listint(head);

	printf("Insert 200 at index 0\n");
	insert_nodeint_at_index(&head, 0, 200);
	print_listint(head);

	printf("Insert 300 at index 10\n");
	insert_nodeint_at_index(&head, 10, 300);

	free_listint(head);

	return (0);
}
