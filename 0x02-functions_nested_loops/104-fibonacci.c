#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int count, cur, prev, fibo;

	cur = 2, prev = 1;

	printf("%d, %d, ", 1, 2);
	count = 2;
	while (count < 98)
	{
		fibo = cur + prev;
		prev = cur;
		cur = fibo;
		printf("%lu", fibo);
		count++;

		if (count <= 97)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
