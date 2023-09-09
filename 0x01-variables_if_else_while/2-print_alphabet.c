#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char q;

	q = 'a';
	while (q <= 'z')
	{
		putchar(q);
		q++;
	}
	putchar('\n');

	return (0);
}
