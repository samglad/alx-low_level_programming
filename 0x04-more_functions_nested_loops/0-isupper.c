#include "main.h"

/**
  * _isupper - A function that checks for uppercase character
  * @c: parameter to be checked
  * Return: returns 1 or 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
