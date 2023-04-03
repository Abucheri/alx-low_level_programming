#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: row array
 *
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int x, b;

	for (x = 0; x < 8; x++)
	{
		for (b = 0; b < 8; b++)
		{
			if (b == 7)
			{
				_putchar(a[x][b]);
				_putchar('\n');
			} else
			{
				_putchar(a[x][b]);
			}
		}
	}
}
