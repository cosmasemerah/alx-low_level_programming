#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 * 01 and 10 are considered the same combination of the
 * two digits 0 and 1
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			if (digit1 >= digit2)
				continue;
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
