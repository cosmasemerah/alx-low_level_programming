#include "main.h"

/**
  * print_square - Draws a diagonal line on the terminal
* @n: The number of times the character '\' is to be printed
* return: void.
*/

void print_square(int n)
{
	int a, b = 0;

	if (n > 0)
	{
		while (b < n)
		{
			for (a = 1; a <= n; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
			b++;
		}
	}

	else
		_putchar('\n');
}
