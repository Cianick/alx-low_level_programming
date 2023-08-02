#include "lists.h"
#include "stdlib.h"
#include "stdio.h"


/* Function to print a listint_t linked list */
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        nodes++;
    }

    return (nodes);
}

/* Function to add a new node at the end of a listint_t list */
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

/* Function to free a listint_t linked list */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

/* Function to get the nth node of a listint_t linked list */
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

/* Function to get the sum of all the data of a listint_t linked list */
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

/* Function to delete the node at index of a listint_t linked list */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        current = *head;
        *head = current->next;
        free(current);
        return (1);
    }

    prev = *head;
    current = (*head)->next;
    for (i = 1; current != NULL; i++)
    {
        if (i == index)
        {
            prev->next = current->next;
            free(current);
            return (1);
        }
        prev = current;
        current = current->next;
    }

    return (-1);
}

/* Function to insert a new node at a given position in a listint_t linked list */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    for (i = 1; current != NULL && i < idx; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
