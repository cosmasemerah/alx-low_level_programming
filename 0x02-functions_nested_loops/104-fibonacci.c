#include <stdio.h>

/**
  * main - finds and prints the first 98 fibonacci numbers
  * staring with 1 and 2
  * Return: Always 0
  */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 1; count <= 98; count++)
	{
		sum = fib1 + fib2;

		printf("%lu ", sum);

		fib1 = fib2;
		fib2 = sum;

	}

	printf("\n");

	return (0);
}
