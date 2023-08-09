#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", *(argv + i));
	}

	return (0);
}
