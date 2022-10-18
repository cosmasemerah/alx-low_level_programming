#include <stdio.h>

/**
  * main - entrance point the program
  * Return: zero if no error and non-zero if error is encountered
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
