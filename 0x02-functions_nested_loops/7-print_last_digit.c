#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  * @i: The number to print its last digit
  * Return: The value of the last digit
  */

int print_last_digit(int i)
{
	int lastdigit;

	lastdigit = i % 10;
	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
