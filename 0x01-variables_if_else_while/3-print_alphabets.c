#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char capital = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
