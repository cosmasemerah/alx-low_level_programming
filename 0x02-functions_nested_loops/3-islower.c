#include <ctype.h>
#include "main.h"

/**
  * _islower - checks for lowercase character
  * @c: The character to check
  * Return: 1 is @c is true and 0 is false
  */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
