#include "main.h"

/**
  * _strlen - Entry point
  * Description: A function that returns the length of a string
  * @s: string parameter
  * Return: returns length
  */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
