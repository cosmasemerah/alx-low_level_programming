#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of chars, and initializes
  * and initializes it with a specific char
  * @size: size of memory to allocate
  * @c: char to initialize with
  * Return: pointer to first elements of the array
  */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc((size) * sizeof(char));

	if (size == 0)
		return (NULL);

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
