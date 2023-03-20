#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
