#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, b;

	a = 'a', b = 'A';
	while (a <= 'z' && b <= 'Z')
	{
		putchar(a);
		putchar(b);
		a++, b++;
	}
	putchar('\n');

	return (0);
}
