#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int len = 0, len1;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len1 = len / 2;

		for (i = len1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		len1 = (len / 2) + 1;

		for (i = len1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
