#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int q;
	char y;

	for (q = 1; q <= 10; q++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
