#include "main.h"

/**
  * puts_half - A function that printshalf of a string
  * @str: string parameter
  * return: 0
  */

void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for ( ; n < len; n++)
		_putchar(str[n]);

	_putchar('\n');
}
