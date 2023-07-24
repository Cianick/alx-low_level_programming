#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal, positive value if s1 is greater, negative
 * value if s2 is greater
 */
int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }

    if (s1[i] != '\0')
        return (s1[i]);

    if (s2[i] != '\0')
        return (-s2[i]);

    return (0);
}
