#include <stdio.h>

/**
  * main - entrance point the program
  * Return: zero if no error and non-zero if error is encountered
  */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
