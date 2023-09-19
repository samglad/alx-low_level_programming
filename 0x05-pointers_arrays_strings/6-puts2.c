#include "main.h"

/**
  * puts2 - A function that prints every other character of a string
  * @str: string parameter
  * return: 0
  */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
