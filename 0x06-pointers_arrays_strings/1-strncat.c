#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int countdest = 0, i;

	while (*(dest + countdest) != '\0')
		countdest++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + countdest) = src[i];
	}

	dest[countdest + i] = '\0';

	return (dest);
}
