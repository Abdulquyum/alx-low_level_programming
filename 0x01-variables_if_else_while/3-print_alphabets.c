#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	char i;
	char q;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	for (q = 'A'; q <= 'Z'; q++)
	putchar(q);
	putchar('\n');
	return (0);
}
