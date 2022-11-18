#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: argument count
  * @argv: argumrnt vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 48 || atoi(argv[i]) > 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
