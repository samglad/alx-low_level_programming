#include "main.h"

/**
  * _islower - Entry point
  * @C: parameter to be checked
  * Description: A function that checks for lowercase character
  * Return: returns 1 or 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
