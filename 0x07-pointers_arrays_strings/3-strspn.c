#include "main.h"

/**
  * _strspn - gets the length if a prefix substring
  * @s: initial segment of string
  * @accept: input string
  * Return: number of bytes of accept in s
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					count++;
			}
		}
		else
		return (count);
	}
	return (count);
}
