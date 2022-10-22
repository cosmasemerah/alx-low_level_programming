#include <stdio.h>

/**
  * main - finds and prints the largest prime factor
  * of the number 612852475143
  * return: Always 0
  */

void main(void)
{
	unsigned long num = 612852475143, i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;

			if (num == 1)
			{
				printf("%lu\n", i);
				break;
			}
		}
	}
}
