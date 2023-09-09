#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char q;

	q = 97;
	while (q <= 122)
	{
		if (q == 101 || q == 113)
			continue;
		putchar(q);
		q++;
	}

	putchar('\n');

	return (0);
}
