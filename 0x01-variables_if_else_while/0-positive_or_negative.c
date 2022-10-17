#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entrance point of the program.
  * Return: Zero if their is no error and non zero if error is encontered
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}
	return (0);
}
