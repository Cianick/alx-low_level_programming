#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;

    while (*s) {
        for (i = 0; accept[i]; i++) {
            if (*s == accept[i]) {
                count++;
                break;
            }
        }

        if (!accept[i]) {
            break;
        }

        s++;
    }

    return count;
}
