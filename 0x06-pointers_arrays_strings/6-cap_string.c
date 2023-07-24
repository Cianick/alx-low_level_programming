#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
    int i;
    int is_word;

    is_word = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (is_word == 0)
                str[i] -= 32;

            is_word = 1;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= '0' && str[i] <= '9'))
        {
            is_word = 1;
        }
        else
        {
            is_word = 0;
        }
    }

    return (str);
}
