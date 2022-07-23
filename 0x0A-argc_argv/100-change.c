#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculated the number of coins required for a change
 * @argc: arguments count
 * @argv: array to store arguments
 *
 * Return: 0 - success, 1 - Error
 */

int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] != '-')
	{
		money = atoi(argv[1]);
		if (money >= 25)
		{
			coins += (money / 25);
			money %= 25;
		}
		if (money >= 10)
		{
			coins += (money / 10);
			money %= 10;
		}
		if (money >= 5)
		{
			coins += (money / 5);
			money %= 5;
		}
		if (money >= 2)
		{
			coins += (money / 2);
			money %= 2;
		}
		if (money == 1)
			coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
