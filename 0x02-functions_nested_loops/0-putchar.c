#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char output[] = "_putchar";
	int i = 0;

	while (output[i] != '\0')
	{
		_putchar(output[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
