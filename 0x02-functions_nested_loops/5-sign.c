#include "main.h"
#include <stdio.h>
/**
 * print_sign -- Prints the sign of a number
 * @n: number to be processed
 * Return: 0
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
