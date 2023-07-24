#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout
 * @s: string input (pointer to type char)
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
