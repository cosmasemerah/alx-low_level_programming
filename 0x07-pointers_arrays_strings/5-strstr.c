#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: The main string to be scanned
  * @needle: thee  substring to be searched within haystack
  * Return: the pointer to the beginning of the located substring,
  * or NULL if the substring is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;

			if (needle[j] == '\0')
				return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
