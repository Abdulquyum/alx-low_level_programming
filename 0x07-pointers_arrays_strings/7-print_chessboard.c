#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: parameter
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int q, i;

	for (q = 0; q < 8; q++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[q][i]);
		}
		_putchar('\n');
	}
}
