#include <ctype.h>
#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: Character to check
  * Return: 1 if @c is uppercase and 0 otherwise
  */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
