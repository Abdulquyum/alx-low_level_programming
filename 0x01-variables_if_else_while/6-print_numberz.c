#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alwayays zero
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
		putchar(q + '0');
	putchar('\n');
	return (0);
}
