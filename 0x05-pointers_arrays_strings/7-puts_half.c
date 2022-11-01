#include "main.h"

/**
  * puts_half - prints the second half of a string
  * if lenght of string is odd n = (length_of_the_string - 1) / 2
  * @str: Input string
  * Return: void
  */

void puts_half(char *str)
{
	int i, n = 0, len;

	while (n >= 0)
	{
		if (str[n] == '\0')
			break;
		n++;
	}

	len = n;

	if (n % 2 != 0)
	{
		n = (n - 1) / 2;

		for (i = n + 1; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		n = n / 2;

		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
