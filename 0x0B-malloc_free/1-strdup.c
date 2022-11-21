#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space
  * which contains a copy of the string given as parameter
  * @str: parameter string
  * Return: pointer to space in memory
  */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	while ((ptr[i] = str[i]) != '\0')
		i++;
	
	return (ptr);
}
