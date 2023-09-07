i#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints text to the standard error
 * Return: This reurns 1
 */

int main(void)
{
	write(2, "\"and that piece of art is useful\" - Dora Korpar, 
			2015-10-19\n", sizeof("\"and that piece of art is 
			useful\" - Dora Korpar, 2015-10-19\n"));
	return (1);
