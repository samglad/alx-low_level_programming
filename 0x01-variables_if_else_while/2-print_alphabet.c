#include <stdio.h>

/**
  * main - Entry Point
  * Description: prints  alphabet in lowercase
  * Return: Always returns 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
