#include "main.h"
#include <stdio.h>
/**
 * create_array - Creates an array of chars, and initializes it
 * @size: the size of non-negative integer
 * @c: the character
 * Description: That's all
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
