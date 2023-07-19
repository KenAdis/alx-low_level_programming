/**
 * _islower - checks for lowercase character
 * @c: operand
 *
 * Return: 1 if lower case, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
