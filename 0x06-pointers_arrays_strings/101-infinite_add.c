#include "main.h"

/**
 * reverse_string - reverses a string
 * @s: input string
 */
void reverse_string(char *s)
{
    int len = 0, i;
    char temp;

    while (s[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

/**
 * infinite_add - adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, carry, sum;

    i = 0;
    j = 0;
    carry = 0;

    while (n1[i] != '\0')
        i++;

    while (n2[j] != '\0')
        j++;

    if (i >= size_r || j >= size_r)
        return (0);

    r[size_r - 1] = '\0';
    i--;
    j--;
    k = size_r - 2;

    while (i >= 0 || j >= 0)
    {
        sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';

        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k--;
    }

    if (carry)
    {
        if (size_r == 1)
            return (0);

        r[k] = carry + '0';
    }
    else
        k++;

    reverse_string(r + k);
    return (r + k);
}
