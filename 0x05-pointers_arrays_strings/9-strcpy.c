#include "main.h"
#include <string.h>

/**
  * _strcpy - copies the string pointed to by src, inluding the
  * terminating null byte (\0), to the buffer pointed to by dest
  * @dest: the destination to copy to
  * @src: the source to copy from
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
