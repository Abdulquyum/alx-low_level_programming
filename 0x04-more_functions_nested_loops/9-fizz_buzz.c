#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Alwayus 0.
 */
int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if ((q % 3 == 0) && (q % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (q % 3 == 0)
		{
			printf("Fizz");
		}
		else if (q % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", q);
		}
		if (q != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
