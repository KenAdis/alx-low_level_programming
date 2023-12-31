/**
 * _memset - fills memory with a constant byte
 * @s: pointer to an array of characters
 * @b: constant byte
 * @n: first n bytes of memory pointed by s
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
