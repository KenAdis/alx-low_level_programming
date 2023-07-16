#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char result = 'z';

	while (result >= 'a')
	{
		putchar(result);
		result--;
	}
	putchar('\n');

	return (0);
}
