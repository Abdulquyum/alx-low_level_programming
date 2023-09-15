#include <stdio.h>

/**
 * main - checks code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int div;

	div = 2;
	while (n > 1)
	{
		if (n % div == 0)
		{
			n /= div;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", div);

	return (0);
}
