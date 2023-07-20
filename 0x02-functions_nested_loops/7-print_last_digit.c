#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input to the function
 *
 * Return: last digit l.
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
		_putchar(l + '0');
	}
	else
	{
		l = n % 10;
		_putchar(l + '0');
	}

	return (l);
}
