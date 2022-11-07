#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string to search
  * @c: the character to locate
  * Return: the pointer to c
  */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = s;

	while (*s != c)
	{
		++s;
		++i;
	}

	if (*s == c)
	{
		return (p + i);
	}
	else 
		return (0);
}
