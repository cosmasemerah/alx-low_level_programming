#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: argument count
  * @argv: argument vector
  * Return: zero if no error, otherwise non-zero
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *(argv++));

	return (0);
}
