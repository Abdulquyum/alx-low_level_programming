#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	char y;

	q = 48;
	while (q <= 57)
	{
		putchar(q);
		q++;
	}

	y = 'a';
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}

	putchar('\n');

	return (0);
}

