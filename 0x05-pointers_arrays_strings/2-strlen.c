#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s - pointer s
 * Return: 0
 */
int _strlen(char  *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s += 1;
	}
	return (len);
}
