#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = '0';
		char k = '0';

		while (j <= '9')
		{
			_putchar(j);
			j++;
		}

		while (k <= '4')
		{
			_putchar('1');
			_putchar(k);
			k++;
		}

		_putchar('\n');
		i++;
	}
}
