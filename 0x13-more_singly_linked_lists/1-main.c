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

    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);

    print_listint(head);

    free_listint(head);

    return (0);
}
