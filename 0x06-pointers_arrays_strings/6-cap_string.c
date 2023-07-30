/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @str: input string
 *
 * Return: string in uppercase
 */

char *cap_string(char *str)
{
	int i, j;
	char *n = ",;.!?(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == n[j])
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}

	return (str);
}
