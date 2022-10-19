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
	return (lastdigit);
}
