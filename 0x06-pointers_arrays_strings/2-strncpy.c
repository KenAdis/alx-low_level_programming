/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to use from src
 *
 * Return: returns dest (output of copy)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len_s = 0;

	while (src[len_s] != '\0')
	{
		len_s++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
