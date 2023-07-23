#include <stdio.h>
#include <math.h>

void largest_prime_factor(long num);

/**
 * main - finds largest prime factor of num
 *
 * Return: Always 0.
 */
int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}

/**
 * largest_prime_factor - prints the largest prime factor
 * @num: input to the function
 * Return: Always 0.
 */
void largest_prime_factor(long num)
{
	long largestFactor = 1;
	long i;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num = num / 2;
	}

	for (i = 3; i * 1 <= num; i = i + 2)
	{
		while (num % i == 0)
		{
			largestFactor = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		largestFactor = num;
	}

	printf("%li\n", largestFactor);
}

