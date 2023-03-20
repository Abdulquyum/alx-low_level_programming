#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int u;

	for (u = 'z'; u >= 'a'; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
