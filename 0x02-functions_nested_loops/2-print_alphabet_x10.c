#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets in ten times
 *
 * Return: return nothing.
 */
void print_alphabet_x10(void)
{
	int q;
	char c;

	for (q = 0; q < 10; q++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
