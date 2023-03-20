#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int q;
	int u;

	for (q = 0; q < 10; q++)
		putchar(q + '0');
	for (u = 'a'; u <= 'f'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
