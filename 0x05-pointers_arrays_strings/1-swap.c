#include "main.h"

/**
  * swap_int - Entry point
  * Description: A function that swaps the values of two integers.
  * @a: Parameter 1
  * @b: Parameter 2
  * Return: returns n
  */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
