#include <stdlib.h>
#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string to search
  * @c: the character to locate
  * Return: the pointer to c
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
