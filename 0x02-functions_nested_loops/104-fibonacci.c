#include <stdio.h>

/**
  * main - finds and prints the first 98 fibonacci numbers
  * staring with 1 and 2
  * Return: Always 0
  */

int main(void)
{
	int count;
	unsigned long long fib1 = 0, fib2 = 1, sum;

	for (count = 1; count <= 98; count++)
	{
		sum = fib1 + fib2;

		printf("%.llu", sum);
		if (count < 98)
		{
			printf(", ");
		}
		if (count == 98)
			break;

		fib1 = fib2;
		fib2 = sum;

	}

	printf("\n");

	return (0);
}
