#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    while (*s) {
        char *p = accept;

        while (*p) {
            if (*s == *p) {
                return s;
            }
            p++;
        }

        s++;
    }

    return NULL;
}
