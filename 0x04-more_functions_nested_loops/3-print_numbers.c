#include "main.h"

/**
  * print_numbers - A function that prints numbers 0 to 9 using _putchar
  * Return: returns 0
  */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
