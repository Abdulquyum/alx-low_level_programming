#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long int prev, cur, count, n, sum = 0;

	prev = 0, cur = 1;

	for (count = 1; count <= 4000000; count++)
	{
		n = cur + prev;
		prev = cur;
		cur = n;

		if (n % 2 == 0)
		{
			sum += n;
		}
	}

	printf("%llu\n", sum);

	return (0);
}
