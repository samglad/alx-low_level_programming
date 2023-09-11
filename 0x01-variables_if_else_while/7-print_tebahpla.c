#include <stdio.h>

/**
  * main - Entry point
  * Description: prints the lowercase alphabet in reverse
  * Return: Always returns 0
  */

int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
