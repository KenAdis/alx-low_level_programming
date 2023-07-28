/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes to use from src
 *
 * Return: returns dest (output of concatenation)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_s = 0, len_d = 0;

	while (dest[len_d] != '\0')
	{
		len_d++;
	}

	while (src[len_s] != '\0')
	{
		len_s++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_d + i] = src[i];
	}
	dest[len_d + i] = '\0';

	return (dest);
}
