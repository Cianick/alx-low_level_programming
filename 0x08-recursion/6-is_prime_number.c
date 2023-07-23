#include "main.h"

/**
 * prime_helper - Checks if a number is prime using recursion
 * @n: The number to check
 * @i: The iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
    if (n <= 1)
        return (0);
    if (i == 1)
        return (1);
    if (n % i == 0)
        return (0);
    return (prime_helper(n, i - 1));
}

/**
 * is_prime_number - Says if an integer is a prime number or not
 * @n: The number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
    return (prime_helper(n, n - 1));
}
