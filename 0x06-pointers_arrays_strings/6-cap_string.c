/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @str: input string
 *
 * Return: string in uppercase
 */

char *cap_string(char *str)
{
	int i, j;
	char *n = " ,;.!?(){}\n\t\"";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;

		for (j = 0; j < 14; j++)
		{
			if (str[i] == n[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}

	return (str);
}
