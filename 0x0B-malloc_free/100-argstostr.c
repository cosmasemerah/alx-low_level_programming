#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of your program
  * @ac: int
  * @av: array
  * Return: pointer to new string
  */

char *argstostr(int ac, char **av)
{
	int x, y, j, l = 0, a = 0;
	char *s;

	if (ac == 0 ||  av == 0)
		return (NUUL);

	for (i = 0;  i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0;  av[x][y] != '\0'; y++)
		{
			s[a] = av[x][y];
			a++;
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}
