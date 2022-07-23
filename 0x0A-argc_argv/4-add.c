#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result of adding all the input arguments
 * @argc: argumenst counter
 * @argv: array thta contains all the arguments
 *
 * Return: 0 - success , 1 - inavlid number
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
