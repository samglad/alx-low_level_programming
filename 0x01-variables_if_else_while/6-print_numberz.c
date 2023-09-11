#include <stdio.h>

/**
  * main - Entry point
  * Description: prints all single digit numbers of base 10 starting from 0
  * Return: Always returns 0
  */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
