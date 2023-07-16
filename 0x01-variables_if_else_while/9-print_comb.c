#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 56)
	{
		putchar(n);
		putchar(',');
		n++;
	}
	putchar(n);
	putchar('\n');
	return (0);
}
