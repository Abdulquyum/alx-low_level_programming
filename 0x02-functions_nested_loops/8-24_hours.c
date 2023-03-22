#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int q;
	int u;

	for (q = 0; q < 24; q++)
	{
		for (u = 0; u < 60; u++)
		{
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar(':');
			_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			_putchar('\n');
		}
	}
}
