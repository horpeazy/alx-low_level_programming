#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s array to fill
 * @b value to fill in array
 * @n number of bytes to fill
 * return - returns a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    while(s[i] != '\0' && i < n){
	s[i] = b;
	i++;
    }

    return(s);
}
