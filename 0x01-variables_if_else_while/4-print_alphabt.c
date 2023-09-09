#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char q;

	for (q = 97; q <= 122; q++)
	{
		if (q == 101)
			continue;
		if (q == 113)
			continue;
		putchar(q);
	}

	putchar('\n');

	return (0);
}
