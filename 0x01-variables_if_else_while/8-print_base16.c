#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int m;

	while (n < 16)
	{
		m = n % 16;

		if (m < 10)
			putchar(m + '0');
		else
			putchar(m - 10 + 'A');
		n++;
	}
	putchar('\n');

	return (0);
}
