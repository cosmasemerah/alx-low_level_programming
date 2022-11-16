#include "main.h"

/**
  * _strncpy - concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of character to copy from src
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
