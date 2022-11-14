#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: input number
  * Return: square root of n
  */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	i++;

	return (1 + _sqrt_recursion(n - (i * 2)));
}
