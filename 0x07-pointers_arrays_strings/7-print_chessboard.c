#include "main.h"

/**
  * print_chessboard -prints the chessboard
  * @a: array of chess board players
  * Return: nothing
  */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][8] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
