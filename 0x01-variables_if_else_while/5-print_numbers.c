#include <stdio.h>

/**
  * main - entrance point the program
  * Return: zero if no error and non-zero if error is encountered
  */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
