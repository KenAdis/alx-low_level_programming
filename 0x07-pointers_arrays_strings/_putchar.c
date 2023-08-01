#include <unistd.h>

/**
 * _putchar - Prints out the given parameter
 * @c: The parameter to be printed out
 *
 * Return: Void
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
