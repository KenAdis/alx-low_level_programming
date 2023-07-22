/**
 * _isupper - checks for lowercase character
 * @c: operand
 *
 * Return: 1 if upper  case, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
