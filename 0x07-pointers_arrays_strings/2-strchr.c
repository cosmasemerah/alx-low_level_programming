#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string to search
  * @c: the character to locate
  * Return: the pointer to c
  */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return '\0';
	}
	return '\0';
}
