#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n - the first term
 * 'n': number
 * Return: Always (0)
 */
void print_to_98(int n)
{
	int i;

	if (i < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			putchar(',');
		}
	}
	if (i > 98)
	{
		printf("%d", i);
		while (i > 98)
			printf("%d", i - 1);
	}
	putchar('\n');
}
