#include "main.h"

/**
 * print_chessboard - printing the chess board
 * @a: the pointer to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, p;

	for (x = 0; x < 8; x++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[x][p]);
		}
		_putchar('\n');
	}
}
