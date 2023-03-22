#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always zero
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
		_putchar(m);
	_putchar('\n');
}
