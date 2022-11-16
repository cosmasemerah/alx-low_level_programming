#include "main.h"

int _sqrt(int n, int x);

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: input number
  * Return: square root of n
  */



int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}


/**
  * _sqrt - function that returns the root of a square
  * @n: test number
  * @x: squared number
  * Return: root of n
  */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
