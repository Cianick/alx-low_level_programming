#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of an array buffer
 * @b: The array buffer
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
        printf("\n");

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++)
        {
            if (i + j >= size)
                printf("  ");
            else
                printf("%02x", b[i + j]);

            if (j % 2 != 0)
                printf(" ");
        }

        for (j = 0; j < 10; j++)
        {
            if (i + j >= size)
                break;

            if (b[i + j] >= ' ' && b[i + j] <= '~')
                printf("%c", b[i + j]);
            else
                printf(".");
        }

        printf("\n");
    }
}
