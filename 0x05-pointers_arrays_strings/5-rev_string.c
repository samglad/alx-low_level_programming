#include "main.h"

/**
  * rev_string - A function that prints a string, in reverse.
  * @s: string parameter
  * return: reverse string
  */

void rev_string(char *s)
{
	char tmp;
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
