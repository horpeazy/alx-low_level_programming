#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string without using a loop
 * @s - the string to print
 *
 * return - always return 0
 */

void _puts_recursion(char *s)
{
    if (*s == '\0') {
        write(1, '\n', 1);
	return;
    }
    write(1, *s, 1);
    _puts_recursion(s + 1);

}
