#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int count_dest = 0, i;

	while (*(dest + count_dest) != '\0')
		count_dest++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count_dest + i] = src[i];
	}

	dest[count_dest + i] = '\0';

	return (dest);
}
