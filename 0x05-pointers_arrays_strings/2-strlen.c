/**
 * _strlen - returns the length of a string
 * @s: pointer to type char
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
