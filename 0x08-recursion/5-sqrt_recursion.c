#include "main.h"

/**
 * sqrt_helper - Calculates the square root of n using recursion
 * @n: The number for which to calculate the square root
 * @i: The iterator
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root
 */
int sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqrt_helper(n, 0));
}
