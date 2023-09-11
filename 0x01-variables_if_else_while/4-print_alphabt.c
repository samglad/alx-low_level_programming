#include <stdio.h>

/**
  * main - Entry point
  * Description: A program that prints the alphabet in lowercase
  * except q and e
  * Return: Always returns 0
  */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
