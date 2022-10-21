#include "main.h"

/**
  * print_diagonal - Draws a diagonal line on the terminal
* @n: The number of times the character '\' is to be printed
* return: void.
*/

void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		if (a > 1)
		{
			b = a;
			while ((b - 1) > 0)
			{
				_putchar(' ');
				b--;
			}
		}

		_putchar('\\');
		_putchar('\n');
	}
}
