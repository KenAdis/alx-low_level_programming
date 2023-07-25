#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input (pointer to type char)
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	int strlen = 0;
	char temp;

	while (s[strlen] != '\0')
	{
		strlen++;
	}

	for (i = 0, j = strlen - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
