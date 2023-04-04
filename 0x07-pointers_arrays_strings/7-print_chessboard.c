#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: parameter for pieces
 *
 * Return: Returns nothing.
 */
void print_chessboard(char (*a)[8])
{
	int q, m;

	for (q = 0; q < 8; q++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[q][m]);
		}
		_putchar('\n');
	}
}
