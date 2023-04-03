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
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			if (b == 7)
			{
				_putchar(a[a][b]);
				_putchar('\n');
			} else
			{
				_putchar(a[a][b]);
			}
		}
	}
}
