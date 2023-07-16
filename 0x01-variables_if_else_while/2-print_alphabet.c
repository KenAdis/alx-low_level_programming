#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char result = 'a';

	while (result <= 'z')
	{
		putchar(result);
		result++;
	}
	putchar('\n');

	return (0);
}
