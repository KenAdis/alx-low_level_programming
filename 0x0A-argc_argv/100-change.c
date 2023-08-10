#include <stdio.h>
#include <stdlib.h>

/**
 * no_coins - calculates number of coins to make change for an amount of money
 * @cents: amount of money
 *
 * Return: number of coins
 */
int no_coins(int cents)
{
	int total = 0, no_25 = 0, no_10 = 0, no_5 = 0, no_2 = 0, no_1 = 0;

	if (cents / 25)
	{
		no_25 = cents / 25;
		cents = cents - (no_25 * 25);
	}
	if (cents / 10)
	{
		no_10 = cents / 10;
		cents = cents - (no_10 * 10);
	}
	if (cents / 5)
	{
		no_5 = cents / 5;
		cents = cents - (no_5 * 5);
	}
	if (cents / 2)
	{
		no_2 = cents / 2;
		cents = cents - (no_2 * 2);
	}
	if (cents / 1)
	{
		no_1 = cents / 1;
		cents = cents - (no_1 * 1);
	}

	total = no_25 + no_10 + no_5 + no_2 + no_1;
	return (total);
}

/**
 * main - prints number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: amount of money
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", no_coins(num));
	}

	return (0);
}
