#include <stdio.h>

void print_number(int n);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n;

    n = 98;
    printf("n = %d\n", n);
    print_number(n);
    printf("\n");
    n = 402;
    printf("n = %d\n", n);
    print_number(n);
    printf("\n");
    n = 1024;
    printf("n = %d\n", n);
    print_number(n);
    printf("\n");
    n = 0;
    printf("n = %d\n", n);
    print_number(n);
    printf("\n");
    n = -98;
    printf("n = %d\n", n);
    print_number(n);
    printf("\n");
    return (0);
}
