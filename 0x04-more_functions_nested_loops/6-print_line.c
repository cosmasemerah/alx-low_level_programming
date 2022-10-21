#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  * @n: the number of times to print '_'
  * Return: void
  */

void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		if (n < 0)
			break;

		_putchar('_');

		count++;
	}

	_putchar('\n');

}
