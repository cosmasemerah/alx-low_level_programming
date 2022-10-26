#include "main.h"

/**
  * swap_int - swaps the value of two integers.
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a; /* temporary assigning *a */
	*a = *b;
	*b = c;
}
