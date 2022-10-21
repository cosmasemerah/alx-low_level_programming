#include <stdio.h>

/**
  * main - finds and prints the sum of the even-valued terms
  * in the Fibonacci sequence whose values do not exceed 4,000,000.
  * Return: Always 0.
  */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum = 0;
	float total_even;

	while (sum < 4000000)
	{
		sum = fib1 + fib2;

		if (sum % 2 == 0)
			total_even += sum;

		fib1 = fib2;
		fib2 = sum;
	}

	printf("%0f\n", total_even);

	return (0);
}
