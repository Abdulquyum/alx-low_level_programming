#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int cur, prev, count, n;

	cur = 2, prev = 1;

	printf("%d, %d, ", 1, 2);
	count = 2;
	while (count < 50)
	{
		n = cur + prev;
		prev = cur;
		cur = n;
		printf("%ld", n);
		count++;
		if (count <= 49)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
