#include <stdio.h>

/**
 * main - prints out number 1 to 100 except for those divisible by 3, 5 & 15
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
