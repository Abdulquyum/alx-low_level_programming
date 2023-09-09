#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	q = 48;
	while (q < 58)
	{
		putchar(q);
		if (q != 57)
		{
			putchar(',');
			putchar(' ');
		}
		q++;
	}

		putchar('\n');

		return (0);
}
