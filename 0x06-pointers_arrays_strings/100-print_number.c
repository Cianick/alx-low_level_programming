#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 */
void print_number(int n)
{
    int digits, divisor, i, last_digit;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    digits = 0;
    divisor = 1;
    while (n / divisor != 0)
    {
        digits++;
        divisor *= 10;
    }

    divisor /= 10;

    for (i = 0; i < digits; i++)
    {
        last_digit = n / divisor;
        _putchar(last_digit + '0');
        n = n - (last_digit * divisor);
        divisor /= 10;
    }
}
