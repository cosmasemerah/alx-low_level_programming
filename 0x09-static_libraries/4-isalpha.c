#include <ctype.h>
#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: The character to check
  * Return: 1 is @c is true and 0 is false
  */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
