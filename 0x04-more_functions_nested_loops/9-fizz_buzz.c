#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if (q % 15 == 0)
			printf("FizzBuzz");
		else if (q % 5 == 0)
			printf("Buzz");
		else if (q % 3 == 0)
			printf("Fizz");
		else
			printf("%d", q);
		if (q < 100)
			printf(" ");
	}
		printf("\n");
		return (0);
}
