#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: the destination string
  * @src: the source string to be added to @dest
  * Return: pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, count = 0;

	while (*(dest + dlen) != '\0')
	{
		dlen++;
	}

	while (dlen >= 0)
	{
		*(dest + dlen) = *(src + count);

		if (src[count] == '\0')
			break;

		count++;
		dlen++;
	}

	return (dest);
}
