#include "main.h"

/**
  * main - Entry point
  * Description: A program that prints the alphabet in lowercase
  * Return: Always returns 0
  */

void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n')
}
