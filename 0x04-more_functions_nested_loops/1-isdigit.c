#include <ctype.h>
#include "main.h"

/**
  * _isdigit - checks for a digit(0 through 9)
  * @c: the digit to check
  * Return: 1 if @c if a digit and 0 otherwise
  */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
