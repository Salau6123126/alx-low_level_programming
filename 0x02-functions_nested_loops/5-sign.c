#include "main.h"
#include <stdio.h>
/**
 * print_sign -- Prints the sign of a number
 * @n: number to be processed
 * Return: 0
 */
int print_sign(int n)
{
	int r

	if (n > 0)
	{
		putchar('+');

		r = 1;
	}
	else if (n == 0)
	{
		putchar('0');

		r = 0;
	}
	else if (n < 0)
	{
		putchar('-');

		r = -1;
	}

	return (r);
}
