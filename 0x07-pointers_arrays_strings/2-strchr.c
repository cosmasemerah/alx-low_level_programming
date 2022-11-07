#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string to search
  * @c: the character to locate
  * Return: the pointer to c
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == c)
			break;
	}

	return (s + i);
}
