#include "main.h"

/**
  * _puts - Prints a string, followed by a new line to stdout.
  * @str: String to pring
  * Return: void
  */

void _puts(char *str)
{
	int count;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[count]);
	}
}
