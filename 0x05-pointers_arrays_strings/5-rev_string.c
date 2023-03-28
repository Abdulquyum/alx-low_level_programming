#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: parameter settle
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int m;
	int count = 0;

	for (m = 0; s[m] != '\0'; m++)
		count++;
	for (m = count; m >= 0; m--)
		_putchar(s[m]);
	_putchar('\n');
}
