/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: returns dest (output of concatenation)
 */

char *_strcat(char *dest, char *src)
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

	for (i = 0; i < len_s; i++)
	{
		dest[len_d + i] = src[i];
	}
	dest[len_d + i] = '\0';

	return (dest);
}
