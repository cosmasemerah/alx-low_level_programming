#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers
  * @a: input array
  * @n: number of elements to be printed
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}
}
