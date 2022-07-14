#include "main.h"

/**
 * _strncat - takes two strings and concatenates them together
 * with a maximun of n bytes
 *
 * return - A pointer to the concatenated strings
 */

char *_strcat(char *dest, char *src, int n)
{
    int i, j;

    for(i = 0; dest[i] != '\0'; i++)
        ;
    for(j = 0; src[j] != '\0' && j < n; j++, i++){
        dest[i] = src[j];
    }
    dest[i] = '\0';

    return(dest);
}
