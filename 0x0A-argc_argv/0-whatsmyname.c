#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument counter
 * @argv: arguments vector
 *
 * Return: - Always return 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
