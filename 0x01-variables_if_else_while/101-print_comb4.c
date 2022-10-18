#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits.
  * The three digits must be different
  * 012, 120, 102, 021, 201, 210 are considered the same
  * combination of the three digits 0, 1 and 2
  * Return: Always 0.
  */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				if (digit1 >= digit2 || digit2 >= digit3)
					continue;
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
