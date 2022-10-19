#include <ctype.h>
#include "main.h"

/**
  * _islower - checks for lowercase character
  * Return: Always 0.
  * @c: The character to check
  */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
