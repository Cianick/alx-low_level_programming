#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    char letter = 'a';
    char letter2 = 'A';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    while (letter2 <= 'Z')
    {
        putchar(letter2);
        letter2++;
    }

    putchar('\n'); /* Add a new line */

    return 0;
}

