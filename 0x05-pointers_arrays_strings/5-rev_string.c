#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: Input string
  * Return: void
  */

void rev_string(char *s)
{
	int i, j, count = 0;
	char temp, *str;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
