#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: Nothing (void)
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
