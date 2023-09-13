#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q, sum = 0;

	for (q = 0; q < 1024; q++)
	{
		if (q % 3 == 0 || q % 5 == 0)
		{
			sum += q;
		}
	}

	printf("%d\n", sum);
	return (0);
}
