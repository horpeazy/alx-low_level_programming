#include <stdio.h>

/**
 * main - prints the number of argumenst passed to it
 * @argc: argument counter
 * @argv: array taht contains progarms arguments
 *
 * Return: always return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
